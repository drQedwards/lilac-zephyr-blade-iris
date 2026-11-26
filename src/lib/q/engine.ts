import {
  DESKS,
  YOU_ADDRESS,
  label,
  partyName,
  type Account,
  type ActionResult,
  type Asset,
  type ChainTx,
  type State,
  type TxKind,
} from "./types";
import {
  DRIP_COOL_MS,
  DRIP_Q,
  DRIP_USDQ,
  EMISSION,
  GAS,
  SUPPLY_Q,
  U,
  USDQ_CAP,
  isqrt,
  mixHash,
  mulberry32,
  quoteOut,
  whole,
  formatAmount,
} from "./units";

const PRODUCER_ORDER = ["quorum", "aurum", "keystone", "copperwell", "you"] as const;
const DESK_IDS = DESKS.map((d) => d.id);
const MIN_POOL = whole(2_000n);

function account(id: string, name: string, address: string, q: bigint, usdq: bigint): Account {
  return { id, name, address, q: q.toString(), usdq: usdq.toString() };
}

export function bal(s: State, id: string): { q: bigint; usdq: bigint } {
  const a = s.accounts.find((x) => x.id === id);
  if (!a) throw new Error(`Missing account ${id}`);
  return { q: BigInt(a.q), usdq: BigInt(a.usdq) };
}

function setBal(s: State, id: string, q: bigint, usdq: bigint): State {
  if (!s.accounts.some((a) => a.id === id)) throw new Error(`Missing account ${id}`);
  return {
    ...s,
    accounts: s.accounts.map((a) => (a.id === id ? { ...a, q: q.toString(), usdq: usdq.toString() } : a)),
  };
}

function enqueue(s: State, kind: TxKind, actor: string, summary: string, parties: string[]): State {
  const nonce = s.nonce + 1;
  const tx: ChainTx = {
    hash: mixHash(["q-tx", String(nonce), kind, summary]),
    block: 0,
    time: 0,
    kind,
    summary,
    actor,
    parties,
  };
  return { ...s, nonce, pending: [...s.pending, tx] };
}

function bare(): State {
  const poolQ = whole(80_000n);
  const poolU = whole(320_000n);
  const lp0 = isqrt(poolQ * poolU);
  return {
    version: 1,
    height: 18420,
    parent: mixHash(["q-genesis"]),
    feePot: "0",
    accounts: [
      account("you", "You", YOU_ADDRESS, 0n, 0n),
      account("harbor", "Harbor", "q1a11ce001", whole(40_000n), whole(90_000n)),
      account("north", "North Desk", "q1b04d0002", whole(15_000n), whole(160_000n)),
      account("lumen", "Lumen", "q1c0de0003", whole(8_000n), whole(40_000n)),
      account("treasury", "Treasury", "q1f0000001", whole(19_907_000n), whole(12_000n)),
    ],
    poolQ: poolQ.toString(),
    poolUsdq: poolU.toString(),
    lpSupply: lp0.toString(),
    lp: { protocol: lp0.toString() },
    stake: {
      quorum: whole(420_000n).toString(),
      aurum: whole(260_000n).toString(),
      keystone: whole(180_000n).toString(),
      copperwell: whole(90_000n).toString(),
      you: "0",
    },
    dripAt: 0,
    mark: 0,
    prices: [],
    blocks: [],
    mine: [],
    pending: [],
    nonce: 0,
  };
}

function applyEndowment(s: State): State {
  const qAmt = whole(2_500n);
  const uAmt = whole(12_000n);
  const treasury = bal(s, "treasury");
  if (treasury.q < qAmt || treasury.usdq < uAmt) throw new Error("genesis endowment underfunded");
  const you = bal(s, "you");
  let next = setBal(s, "treasury", treasury.q - qAmt, treasury.usdq - uAmt);
  next = setBal(next, "you", you.q + qAmt, you.usdq + uAmt);
  const summary = `Genesis endowment · ${formatAmount(qAmt)} Q and ${formatAmount(uAmt)} USDQ`;
  return enqueue(next, "transfer", "treasury", summary, ["treasury", "you"]);
}

function pickProducer(s: State, rng: () => number): string {
  const ids = PRODUCER_ORDER.filter((id) => BigInt(s.stake[id] ?? "0") > 0n);
  if (ids.length === 0) return "quorum";
  const total = ids.reduce((sum, id) => sum + BigInt(s.stake[id] ?? "0"), 0n);
  let ticket = BigInt(Math.floor(rng() * 1_000_000_000_000)) % total;
  for (const id of ids) {
    const weight = BigInt(s.stake[id] ?? "0");
    if (ticket < weight) return id;
    ticket -= weight;
  }
  return ids[ids.length - 1];
}

function payEmission(s: State): { state: State; paid: bigint } {
  const treasury = bal(s, "treasury");
  const paid = treasury.q < EMISSION ? treasury.q : EMISSION;
  if (paid === 0n) return { state: s, paid: 0n };
  const ids = PRODUCER_ORDER.filter((id) => BigInt(s.stake[id] ?? "0") > 0n);
  const total = ids.reduce((sum, id) => sum + BigInt(s.stake[id] ?? "0"), 0n);
  if (ids.length === 0 || total === 0n) return { state: s, paid: 0n };
  let largest: string = ids[0];
  const adds: Record<string, bigint> = {};
  let allocated = 0n;
  for (const id of ids) {
    const have = BigInt(s.stake[id] ?? "0");
    const share = (paid * have) / total;
    adds[id] = share;
    allocated += share;
    if (have > BigInt(s.stake[largest] ?? "0")) largest = id;
  }
  adds[largest] = (adds[largest] ?? 0n) + (paid - allocated);
  let next = setBal(s, "treasury", treasury.q - paid, treasury.usdq);
  const stake = { ...next.stake };
  for (const id of ids) stake[id] = (BigInt(stake[id] ?? "0") + (adds[id] ?? 0n)).toString();
  return { state: { ...next, stake }, paid };
}

export function seal(s: State, rng: () => number, now: number, market: boolean): State {
  let next = market ? runMarket(s, rng) : s;
  const emitted = payEmission(next);
  next = emitted.state;
  const producer = pickProducer(next, rng);
  const fees = BigInt(next.feePot);
  if (fees > 0n) {
    const stake = { ...next.stake };
    stake[producer] = (BigInt(stake[producer] ?? "0") + fees).toString();
    next = { ...next, stake, feePot: "0" };
  }
  const height = next.height + 1;
  const txs = next.pending.map((tx) => ({ ...tx, block: height, time: now }));
  const hash = mixHash([
    "q-block",
    String(height),
    next.parent,
    producer,
    String(now),
    emitted.paid.toString(),
    fees.toString(),
    txs.map((tx) => tx.hash).join(","),
  ]);
  const price = spotPrice(next);
  const mineAdd = txs.filter((tx) => tx.parties.includes("you"));
  return {
    ...next,
    height,
    parent: hash,
    pending: [],
    prices: [...next.prices, price].slice(-48),
    blocks: [
      {
        height,
        hash,
        parent: next.parent,
        time: now,
        producer,
        emission: emitted.paid.toString(),
        fees: fees.toString(),
        txs,
      },
      ...next.blocks,
    ].slice(0, 36),
    mine: [...mineAdd, ...next.mine].slice(0, 40),
  };
}

function runMarket(s: State, rng: () => number): State {
  let next = s;
  const swaps = rng() < 0.62 ? 2 : 1;
  for (let i = 0; i < swaps; i++) {
    const swapped = tryMarketSwap(next, rng);
    if (swapped) next = swapped;
  }
  if (rng() < 0.42) {
    const moved = tryDeskTransfer(next, rng);
    if (moved) next = moved;
  }
  if (rng() < 0.1) {
    const gift = tryGift(next, rng);
    if (gift) next = gift;
  }
  return next;
}

function tryMarketSwap(s: State, rng: () => number): State | null {
  const mid = spotPrice(s);
  const sellQ = rng() < (mid > 4 ? 0.82 : mid < 4 ? 0.18 : 0.5);
  const choices = DESK_IDS.filter((id) => {
    const b = bal(s, id);
    return sellQ ? b.q > whole(80n) : b.usdq > whole(80n);
  });
  if (choices.length === 0) return null;
  const id = choices[Math.floor(rng() * choices.length)] ?? choices[0];
  const reserveIn = BigInt(sellQ ? s.poolQ : s.poolUsdq);
  const bps = 20 + Math.floor(rng() * 60);
  let amount = (reserveIn * BigInt(bps)) / 10_000n;
  const deskBal = sellQ ? bal(s, id).q : bal(s, id).usdq;
  const cap = (deskBal * 25n) / 100n;
  if (amount > cap) amount = cap;
  if (amount < whole(8n)) return null;
  const pay: Asset = sellQ ? "q" : "usdq";
  let tryAmt = amount;
  for (let i = 0; i < 4; i++) {
    const res = applySwap(s, id, pay, tryAmt, false);
    if (res.ok) return res.state;
    tryAmt /= 2n;
    if (tryAmt < whole(8n)) return null;
  }
  return null;
}

function tryDeskTransfer(s: State, rng: () => number): State | null {
  const from = DESK_IDS[Math.floor(rng() * DESK_IDS.length)] ?? "harbor";
  const to = DESK_IDS[(DESK_IDS.indexOf(from) + 1 + Math.floor(rng() * 2)) % DESK_IDS.length] ?? "north";
  if (to === from) return null;
  const amt = whole(20n + BigInt(Math.floor(rng() * 90)));
  const sender = bal(s, from);
  if (sender.q < amt + whole(800n)) return null;
  let next = setBal(s, from, sender.q - amt, sender.usdq);
  const recv = bal(next, to);
  next = setBal(next, to, recv.q + amt, recv.usdq);
  const summary = `${partyName(from, "subj")} sent ${partyName(to, "obj")} ${formatAmount(amt)} Q`;
  return enqueue(next, "transfer", from, summary, [from, to]);
}

function tryGift(s: State, rng: () => number): State | null {
  const from = DESK_IDS[Math.floor(rng() * DESK_IDS.length)] ?? "harbor";
  const amt = whole(1n + BigInt(Math.floor(rng() * 6)));
  const sender = bal(s, from);
  if (sender.q < amt + whole(1_000n)) return null;
  let next = setBal(s, from, sender.q - amt, sender.usdq);
  const you = bal(next, "you");
  next = setBal(next, "you", you.q + amt, you.usdq);
  const summary = `${partyName(from, "subj")} sent you ${formatAmount(amt)} Q`;
  return enqueue(next, "transfer", from, summary, [from, "you"]);
}

export function createGenesis(): State {
  let s = applyEndowment(bare());
  s = seal(s, () => 0, 0, false);
  const rng = mulberry32(0x5171);
  for (let i = 0; i < 18; i++) s = seal(s, rng, 0, true);
  return { ...s, mark: spotPrice(s) };
}

function fail(error: string): { ok: false; error: string } {
  return { ok: false, error };
}

function done(s: State): ActionResult {
  const tx = s.mine[0];
  return { ok: true, summary: tx?.summary ?? "Sealed", height: s.height, state: s };
}

type SwapApply =
  | { ok: false; error: string }
  | { ok: true; state: State; amountOut: bigint };

function applySwap(s: State, id: string, pay: Asset, amountIn: bigint, gas: boolean): SwapApply {
  if (amountIn <= 0n) return { ok: false, error: "Enter an amount." };
  const who = bal(s, id);
  const gasCost = gas ? GAS : 0n;
  if (pay === "q" && who.q < amountIn + gasCost) {
    return { ok: false, error: gas ? "Not enough Q for the trade and the 0.05 fee." : "Not enough Q." };
  }
  if (pay === "usdq" && who.usdq < amountIn) return { ok: false, error: "Not enough USDQ." };
  if (who.q < gasCost) return { ok: false, error: "Not enough Q to pay the 0.05 fee." };
  const poolQ = BigInt(s.poolQ);
  const poolU = BigInt(s.poolUsdq);
  const reserveIn = pay === "q" ? poolQ : poolU;
  const reserveOut = pay === "q" ? poolU : poolQ;
  const amountOut = quoteOut(amountIn, reserveIn, reserveOut);
  if (amountOut <= 0n) return { ok: false, error: "That amount is too small to clear the pool." };
  if (reserveOut - amountOut < MIN_POOL) return { ok: false, error: "The pool can't take a trade that large." };
  let q = who.q - gasCost;
  let u = who.usdq;
  if (pay === "q") {
    q -= amountIn;
    u += amountOut;
  } else {
    u -= amountIn;
    q += amountOut;
  }
  let next = setBal(s, id, q, u);
  next = {
    ...next,
    poolQ: (pay === "q" ? poolQ + amountIn : poolQ - amountOut).toString(),
    poolUsdq: (pay === "q" ? poolU - amountOut : poolU + amountIn).toString(),
    feePot: (BigInt(next.feePot) + gasCost).toString(),
  };
  const summary =
    pay === "q"
      ? `${partyName(id, "subj")} sold ${formatAmount(amountIn)} Q for ${formatAmount(amountOut)} USDQ`
      : `${partyName(id, "subj")} bought ${formatAmount(amountOut)} Q for ${formatAmount(amountIn)} USDQ`;
  return { ok: true, state: enqueue(next, "swap", id, summary, [id]), amountOut };
}

export function previewSwap(
  s: State,
  pay: Asset,
  amountIn: bigint,
): { ok: false; error: string } | { ok: true; amountOut: bigint; impact: number } {
  const mid = spotPrice(s);
  const who = bal(s, "you");
  const applied = applySwap(s, "you", pay, amountIn, true);
  if (!applied.ok) return applied;
  const after = bal(applied.state, "you");
  const amountOut = pay === "q" ? after.usdq - who.usdq : after.q + GAS - who.q;
  const next = spotPrice(applied.state);
  const impact = mid > 0 ? (next - mid) / mid : 0;
  return { ok: true, amountOut, impact };
}

export function userSwap(s: State, pay: Asset, amountIn: bigint, now: number, rng: () => number): ActionResult {
  const applied = applySwap(s, "you", pay, amountIn, true);
  if (!applied.ok) return applied;
  return done(seal(applied.state, rng, now, false));
}

function resolveDest(s: State, to: string): { ok: false; error: string } | { ok: true; state: State; id: string } {
  const trimmed = to.trim();
  if (!trimmed) return fail("Choose who receives it.");
  if (trimmed === "you" || trimmed === YOU_ADDRESS) return fail("That is already your seat.");
  const byId = s.accounts.find((a) => a.id === trimmed);
  const byAddr = s.accounts.find((a) => a.address === trimmed);
  const found = byId ?? byAddr;
  if (found) {
    if (found.id === "you") return fail("That is already your seat.");
    if (found.id === "treasury") return fail("The treasury doesn't take transfers. Stake, or take a drip.");
    return { ok: true, state: s, id: found.id };
  }
  if (!/^q1[a-f0-9]{8}$/.test(trimmed)) {
    return fail("Addresses on Q look like q1 plus eight hex characters.");
  }
  if (s.accounts.length >= 18) return fail("Too many outside seats in this browser. Reset the chain to clear them.");
  return {
    ok: true,
    id: trimmed,
    state: {
      ...s,
      accounts: [...s.accounts, account(trimmed, label(trimmed), trimmed, 0n, 0n)],
    },
  };
}

export function userTransfer(s: State, to: string, amount: bigint, now: number, rng: () => number): ActionResult {
  if (amount <= 0n) return fail("Enter an amount.");
  const dest = resolveDest(s, to);
  if (!dest.ok) return dest;
  const who = bal(dest.state, "you");
  if (who.q < amount + GAS) return fail("Not enough Q for the send and the 0.05 fee.");
  let next = setBal(dest.state, "you", who.q - amount - GAS, who.usdq);
  const recv = bal(next, dest.id);
  next = setBal(next, dest.id, recv.q + amount, recv.usdq);
  next = { ...next, feePot: (BigInt(next.feePot) + GAS).toString() };
  const summary = `${partyName("you", "subj")} sent ${partyName(dest.id, "obj")} ${formatAmount(amount)} Q`;
  next = enqueue(next, "transfer", "you", summary, ["you", dest.id]);
  return done(seal(next, rng, now, false));
}

function applyAdd(s: State, qIn: bigint): { ok: false; error: string } | { ok: true; state: State } {
  if (qIn <= 0n) return fail("Enter an amount of Q.");
  const who = bal(s, "you");
  if (who.q < qIn + GAS) return fail("Not enough Q for the deposit and the 0.05 fee.");
  const poolQ = BigInt(s.poolQ);
  const poolU = BigInt(s.poolUsdq);
  const supply = BigInt(s.lpSupply);
  if (poolQ === 0n || poolU === 0n || supply === 0n) return fail("The pool is empty.");
  const uIn = (qIn * poolU) / poolQ;
  if (uIn <= 0n) return fail("That amount is too small to mint a share.");
  if (who.usdq < uIn) return fail("Not enough USDQ to match that Q at the pool price.");
  const shares = (qIn * supply) / poolQ;
  if (shares <= 0n) return fail("That amount is too small to mint a share.");
  const youLp = BigInt(s.lp.you ?? "0") + shares;
  let next = setBal(s, "you", who.q - qIn - GAS, who.usdq - uIn);
  next = {
    ...next,
    poolQ: (poolQ + qIn).toString(),
    poolUsdq: (poolU + uIn).toString(),
    lpSupply: (supply + shares).toString(),
    lp: { ...s.lp, you: youLp.toString() },
    feePot: (BigInt(next.feePot) + GAS).toString(),
  };
  const summary = `You added ${formatAmount(qIn)} Q and ${formatAmount(uIn)} USDQ to the pool`;
  return { ok: true, state: enqueue(next, "add", "you", summary, ["you"]) };
}

export function previewAdd(
  s: State,
  qIn: bigint,
): { ok: false; error: string } | { ok: true; usdq: bigint; shares: bigint } {
  const beforeLp = BigInt(s.lp.you ?? "0");
  const applied = applyAdd(s, qIn);
  if (!applied.ok) return applied;
  return {
    ok: true,
    usdq: bal(s, "you").usdq - bal(applied.state, "you").usdq,
    shares: BigInt(applied.state.lp.you ?? "0") - beforeLp,
  };
}

export function userAdd(s: State, qIn: bigint, now: number, rng: () => number): ActionResult {
  const applied = applyAdd(s, qIn);
  if (!applied.ok) return applied;
  return done(seal(applied.state, rng, now, false));
}

export function userRemove(s: State, bps: number, now: number, rng: () => number): ActionResult {
  if (bps <= 0 || bps > 10_000) return fail("Choose how much of your position to take out.");
  const who = bal(s, "you");
  if (who.q < GAS) return fail("You need 0.05 Q liquid to pay the fee.");
  const supply = BigInt(s.lpSupply);
  const have = BigInt(s.lp.you ?? "0");
  if (have === 0n || supply === 0n) return fail("You don't have a pool position.");
  const shares = (have * BigInt(bps)) / 10_000n;
  if (shares <= 0n) return fail("That slice is too small to withdraw.");
  const poolQ = BigInt(s.poolQ);
  const poolU = BigInt(s.poolUsdq);
  const qOut = (shares * poolQ) / supply;
  const uOut = (shares * poolU) / supply;
  if (qOut <= 0n || uOut <= 0n) return fail("That slice is too small to withdraw.");
  if (poolQ - qOut < MIN_POOL || poolU - uOut < MIN_POOL) return fail("Leave the pool enough depth to keep pricing.");
  let next = setBal(s, "you", who.q - GAS + qOut, who.usdq + uOut);
  next = {
    ...next,
    poolQ: (poolQ - qOut).toString(),
    poolUsdq: (poolU - uOut).toString(),
    lpSupply: (supply - shares).toString(),
    lp: { ...s.lp, you: (have - shares).toString() },
    feePot: (BigInt(s.feePot) + GAS).toString(),
  };
  const summary = `You took ${formatAmount(qOut)} Q and ${formatAmount(uOut)} USDQ out of the pool`;
  next = enqueue(next, "remove", "you", summary, ["you"]);
  return done(seal(next, rng, now, false));
}

export function userStake(s: State, amount: bigint, now: number, rng: () => number): ActionResult {
  if (amount <= 0n) return fail("Enter an amount.");
  const who = bal(s, "you");
  if (who.q < amount + GAS) return fail("Not enough Q for the stake and the 0.05 fee.");
  if (who.q < amount + GAS * 2n) return fail("Leave 0.05 Q liquid so you can unstake later.");
  let next = setBal(s, "you", who.q - amount - GAS, who.usdq);
  const stake = { ...next.stake, you: (BigInt(next.stake.you ?? "0") + amount).toString() };
  next = { ...next, stake, feePot: (BigInt(next.feePot) + GAS).toString() };
  const summary = `You staked ${formatAmount(amount)} Q`;
  next = enqueue(next, "stake", "you", summary, ["you"]);
  return done(seal(next, rng, now, false));
}

export function userUnstake(s: State, amount: bigint, now: number, rng: () => number): ActionResult {
  if (amount <= 0n) return fail("Enter an amount.");
  const who = bal(s, "you");
  const staked = BigInt(s.stake.you ?? "0");
  if (staked < amount) return fail("That is more than your seat has staked.");
  if (who.q < GAS) return fail("You need 0.05 Q liquid to pay the fee and unstake.");
  let next = setBal(s, "you", who.q - GAS + amount, who.usdq);
  const stake = { ...next.stake, you: (staked - amount).toString() };
  next = { ...next, stake, feePot: (BigInt(next.feePot) + GAS).toString() };
  const summary = `You unstaked ${formatAmount(amount)} Q`;
  next = enqueue(next, "unstake", "you", summary, ["you"]);
  return done(seal(next, rng, now, false));
}

export function userDrip(s: State, now: number, rng: () => number): ActionResult {
  if (s.dripAt !== 0 && now < s.dripAt + DRIP_COOL_MS) {
    const secs = Math.max(1, Math.ceil((s.dripAt + DRIP_COOL_MS - now) / 1000));
    return fail(`The drip opens again in ${secs}s.`);
  }
  const treasury = bal(s, "treasury");
  if (treasury.q < DRIP_Q) return fail("The treasury has no Q left to drip.");
  if (totalUsdq(s) + DRIP_USDQ > USDQ_CAP) return fail("The mint has issued all the USDQ it will.");
  const you = bal(s, "you");
  let next = setBal(s, "treasury", treasury.q - DRIP_Q, treasury.usdq);
  next = setBal(next, "you", you.q + DRIP_Q, you.usdq + DRIP_USDQ);
  next = { ...next, dripAt: now };
  const summary = `You took a drip of ${formatAmount(DRIP_Q)} Q and ${formatAmount(DRIP_USDQ)} USDQ`;
  next = enqueue(next, "drip", "you", summary, ["you"]);
  return done(seal(next, rng, now, false));
}

export function spotPrice(s: State): number {
  const q = BigInt(s.poolQ);
  if (q === 0n) return 0;
  return Number(BigInt(s.poolUsdq)) / Number(q);
}

export function totalQ(s: State): bigint {
  let t = BigInt(s.poolQ) + BigInt(s.feePot);
  for (const a of s.accounts) t += BigInt(a.q);
  for (const v of Object.values(s.stake)) t += BigInt(v);
  return t;
}

export function totalUsdq(s: State): bigint {
  let t = BigInt(s.poolUsdq);
  for (const a of s.accounts) t += BigInt(a.usdq);
  return t;
}

export function totalLp(s: State): bigint {
  return Object.values(s.lp).reduce((sum, v) => sum + BigInt(v), 0n);
}

export function totalStake(s: State): bigint {
  return Object.values(s.stake).reduce((sum, v) => sum + BigInt(v), 0n);
}

export function maxAddQ(s: State): bigint {
  const you = bal(s, "you");
  const poolQ = BigInt(s.poolQ);
  const poolU = BigInt(s.poolUsdq);
  if (poolQ === 0n || poolU === 0n) return 0n;
  const qBal = you.q > GAS ? you.q - GAS : 0n;
  const affordable = (you.usdq * poolQ) / poolU;
  return qBal < affordable ? qBal : affordable;
}

export function maxStake(qBal: bigint): bigint {
  const reserve = GAS * 2n;
  return qBal > reserve ? qBal - reserve : 0n;
}

export function lpPosition(s: State): { shares: bigint; q: bigint; usdq: bigint; pct: number } {
  const shares = BigInt(s.lp.you ?? "0");
  const supply = BigInt(s.lpSupply);
  if (shares === 0n || supply === 0n) return { shares: 0n, q: 0n, usdq: 0n, pct: 0 };
  return {
    shares,
    q: (shares * BigInt(s.poolQ)) / supply,
    usdq: (shares * BigInt(s.poolUsdq)) / supply,
    pct: (Number(shares) / Number(supply)) * 100,
  };
}

export interface MoneyRow {
  id: string;
  name: string;
  q: bigint;
}

export function balanceRows(s: State): MoneyRow[] {
  const known = new Set(["you", "harbor", "north", "lumen", "treasury"]);
  const rows: MoneyRow[] = [
    { id: "you", name: "You", q: bal(s, "you").q },
    ...DESKS.map((d) => ({ id: d.id, name: d.name, q: bal(s, d.id).q })),
    { id: "pool", name: "Pool", q: BigInt(s.poolQ) },
    { id: "stake", name: "Staked", q: totalStake(s) },
  ];
  for (const a of s.accounts) {
    if (!known.has(a.id)) rows.push({ id: a.id, name: a.name, q: BigInt(a.q) });
  }
  rows.push({ id: "treasury", name: "Treasury", q: bal(s, "treasury").q });
  return rows;
}

export function recentTxs(s: State, n = 6): ChainTx[] {
  const out: ChainTx[] = [];
  for (const block of s.blocks) {
    for (const tx of block.txs) {
      out.push(tx);
      if (out.length >= n) return out;
    }
  }
  return out;
}

export function supplyIntact(s: State): boolean {
  return totalQ(s) === SUPPLY_Q && totalLp(s) === BigInt(s.lpSupply);
}
