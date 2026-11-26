import { t as create } from "../_libs/zustand.mjs";
//#region node_modules/.nitro/vite/services/ssr/assets/store-DXz1-2hr.js
var YOU_ADDRESS = "q1e7c0ffee";
var DESKS = [
	{
		id: "harbor",
		name: "Harbor",
		address: "q1a11ce001"
	},
	{
		id: "north",
		name: "North Desk",
		address: "q1b04d0002"
	},
	{
		id: "lumen",
		name: "Lumen",
		address: "q1c0de0003"
	}
];
var VALIDATORS = [
	{
		id: "quorum",
		name: "Quorum"
	},
	{
		id: "aurum",
		name: "Aurum"
	},
	{
		id: "keystone",
		name: "Keystone"
	},
	{
		id: "copperwell",
		name: "Copperwell"
	}
];
var NAMES = {
	you: "You",
	harbor: "Harbor",
	north: "North Desk",
	lumen: "Lumen",
	treasury: "Treasury",
	quorum: "Quorum",
	aurum: "Aurum",
	keystone: "Keystone",
	copperwell: "Copperwell",
	pool: "Pool",
	protocol: "Protocol"
};
function label(id) {
	return NAMES[id] ?? (id.startsWith("q1") ? `${id.slice(0, 6)}…${id.slice(-3)}` : id);
}
function partyName(id, role) {
	if (id === "you") return role === "subj" ? "You" : "you";
	return label(id);
}
var U = 1000000n;
var GAS = 50000n;
var EMISSION = 2000000n;
var DRIP_Q = 50000000n;
var DRIP_USDQ = 200000000n;
var DRIP_COOL_MS = 45e3;
var BLOCK_MS = 3200;
21000000n * U;
var USDQ_CAP = 2000000n * U;
function whole(n) {
	return n * U;
}
function mulberry32(seed) {
	let a = seed >>> 0;
	return () => {
		a |= 0;
		a = a + 1831565813 | 0;
		let t = Math.imul(a ^ a >>> 15, 1 | a);
		t = t + Math.imul(t ^ t >>> 7, 61 | t) ^ t;
		return ((t ^ t >>> 14) >>> 0) / 4294967296;
	};
}
function mixHash(parts) {
	let h1 = 2166136261;
	let h2 = 16777619;
	const s = parts.join("|");
	for (let i = 0; i < s.length; i++) {
		const c = s.charCodeAt(i);
		h1 = Math.imul(h1 ^ c, 16777619);
		h2 = Math.imul(h2 ^ c, 668265263);
	}
	return (h1 >>> 0).toString(16).padStart(8, "0") + (h2 >>> 0).toString(16).padStart(8, "0");
}
function isqrt(n) {
	if (n < 2n) return n < 0n ? 0n : n;
	let x = n;
	let y = (x + 1n) / 2n;
	while (y < x) {
		x = y;
		y = (x + n / x) / 2n;
	}
	return x;
}
function groupInt(digits) {
	return digits.replace(/\B(?=(\d{3})+(?!\d))/g, ",");
}
function formatUnits(v, digits = 2) {
	const neg = v < 0n;
	const a = neg ? -v : v;
	const safeDigits = Math.max(0, Math.min(6, digits));
	const wholePart = a / U;
	const frac = a % U;
	const head = groupInt(wholePart.toString());
	if (safeDigits === 0) return neg ? `-${head}` : head;
	const fracStr = frac.toString().padStart(6, "0").slice(0, safeDigits);
	return `${neg ? "-" : ""}${head}.${fracStr}`;
}
function formatAmount(v) {
	const [head, frac] = formatUnits(v, 4).split(".");
	if (!frac) return head;
	const trimmed = frac.replace(/0+$/, "");
	return trimmed ? `${head}.${trimmed}` : head;
}
function formatPrice(p) {
	if (!Number.isFinite(p)) return "0.000";
	const sign = p < 0 ? "-" : "";
	const millis = Math.round(Math.abs(p) * 1e3);
	return `${sign}${groupInt(String(Math.floor(millis / 1e3)))}.${(millis % 1e3).toString().padStart(3, "0")}`;
}
function formatPct(frac) {
	if (!Number.isFinite(frac) || frac === 0) return "0.00%";
	const sign = frac > 0 ? "+" : "-";
	const v = Math.round(Math.abs(frac) * 1e4);
	return `${sign}${Math.floor(v / 100)}.${(v % 100).toString().padStart(2, "0")}%`;
}
function formatInt(n) {
	return groupInt(String(Math.max(0, Math.trunc(n))));
}
function formatShare(pct) {
	if (!Number.isFinite(pct) || pct <= 0) return "0%";
	const v = Math.round(pct * 10);
	const head = Math.floor(v / 10);
	const dec = v % 10;
	return dec === 0 ? `${head}%` : `${head}.${dec}%`;
}
function parseUnits(input) {
	const s = input.trim();
	if (!/^\d{1,12}(\.\d{0,6})?$/.test(s)) return null;
	const [w, f = ""] = s.split(".");
	const frac = (f + "000000").slice(0, 6);
	return BigInt(w) * U + BigInt(frac);
}
function formatInput(v) {
	if (v <= 0n) return "";
	const [head, frac] = formatUnits(v, 4).replace(/,/g, "").split(".");
	if (!frac) return head;
	const trimmed = frac.replace(/0+$/, "");
	return trimmed ? `${head}.${trimmed}` : head;
}
function quoteOut(amountIn, reserveIn, reserveOut) {
	if (amountIn <= 0n || reserveIn <= 0n || reserveOut <= 0n) return 0n;
	const amountInWithFee = amountIn * 9970n;
	return amountInWithFee * reserveOut / (reserveIn * 10000n + amountInWithFee);
}
function perMinute(your, total) {
	if (your <= 0n || total <= 0n) return 0n;
	return EMISSION * your * 60000n / (total * BigInt(BLOCK_MS));
}
function relTime(t, now) {
	if (t === 0) return "Earlier";
	if (!now) return "Just now";
	const s = Math.max(0, Math.round((now - t) / 1e3));
	if (s < 5) return "Just now";
	if (s < 60) return `${s}s ago`;
	const m = Math.floor(s / 60);
	if (m < 60) return `${m}m ago`;
	return `${Math.floor(m / 60)}h ago`;
}
var PRODUCER_ORDER = [
	"quorum",
	"aurum",
	"keystone",
	"copperwell",
	"you"
];
var DESK_IDS = DESKS.map((d) => d.id);
var MIN_POOL = whole(2000n);
function account(id, name, address, q, usdq) {
	return {
		id,
		name,
		address,
		q: q.toString(),
		usdq: usdq.toString()
	};
}
function bal(s, id) {
	const a = s.accounts.find((x) => x.id === id);
	if (!a) throw new Error(`Missing account ${id}`);
	return {
		q: BigInt(a.q),
		usdq: BigInt(a.usdq)
	};
}
function setBal(s, id, q, usdq) {
	if (!s.accounts.some((a) => a.id === id)) throw new Error(`Missing account ${id}`);
	return {
		...s,
		accounts: s.accounts.map((a) => a.id === id ? {
			...a,
			q: q.toString(),
			usdq: usdq.toString()
		} : a)
	};
}
function enqueue(s, kind, actor, summary, parties) {
	const nonce = s.nonce + 1;
	const tx = {
		hash: mixHash([
			"q-tx",
			String(nonce),
			kind,
			summary
		]),
		block: 0,
		time: 0,
		kind,
		summary,
		actor,
		parties
	};
	return {
		...s,
		nonce,
		pending: [...s.pending, tx]
	};
}
function bare() {
	const poolQ = whole(80000n);
	const poolU = whole(320000n);
	const lp0 = isqrt(poolQ * poolU);
	return {
		version: 1,
		height: 18420,
		parent: mixHash(["q-genesis"]),
		feePot: "0",
		accounts: [
			account("you", "You", YOU_ADDRESS, 0n, 0n),
			account("harbor", "Harbor", "q1a11ce001", whole(40000n), whole(90000n)),
			account("north", "North Desk", "q1b04d0002", whole(15000n), whole(160000n)),
			account("lumen", "Lumen", "q1c0de0003", whole(8000n), whole(40000n)),
			account("treasury", "Treasury", "q1f0000001", whole(19907000n), whole(12000n))
		],
		poolQ: poolQ.toString(),
		poolUsdq: poolU.toString(),
		lpSupply: lp0.toString(),
		lp: { protocol: lp0.toString() },
		stake: {
			quorum: whole(420000n).toString(),
			aurum: whole(260000n).toString(),
			keystone: whole(180000n).toString(),
			copperwell: whole(90000n).toString(),
			you: "0"
		},
		dripAt: 0,
		mark: 0,
		prices: [],
		blocks: [],
		mine: [],
		pending: [],
		nonce: 0
	};
}
function applyEndowment(s) {
	const qAmt = whole(2500n);
	const uAmt = whole(12000n);
	const treasury = bal(s, "treasury");
	if (treasury.q < qAmt || treasury.usdq < uAmt) throw new Error("genesis endowment underfunded");
	const you = bal(s, "you");
	let next = setBal(s, "treasury", treasury.q - qAmt, treasury.usdq - uAmt);
	next = setBal(next, "you", you.q + qAmt, you.usdq + uAmt);
	const summary = `Genesis endowment · ${formatAmount(qAmt)} Q and ${formatAmount(uAmt)} USDQ`;
	return enqueue(next, "transfer", "treasury", summary, ["treasury", "you"]);
}
function pickProducer(s, rng) {
	const ids = PRODUCER_ORDER.filter((id) => BigInt(s.stake[id] ?? "0") > 0n);
	if (ids.length === 0) return "quorum";
	const total = ids.reduce((sum, id) => sum + BigInt(s.stake[id] ?? "0"), 0n);
	let ticket = BigInt(Math.floor(rng() * 0xe8d4a51000)) % total;
	for (const id of ids) {
		const weight = BigInt(s.stake[id] ?? "0");
		if (ticket < weight) return id;
		ticket -= weight;
	}
	return ids[ids.length - 1];
}
function payEmission(s) {
	const treasury = bal(s, "treasury");
	const paid = treasury.q < 2000000n ? treasury.q : EMISSION;
	if (paid === 0n) return {
		state: s,
		paid: 0n
	};
	const ids = PRODUCER_ORDER.filter((id) => BigInt(s.stake[id] ?? "0") > 0n);
	const total = ids.reduce((sum, id) => sum + BigInt(s.stake[id] ?? "0"), 0n);
	if (ids.length === 0 || total === 0n) return {
		state: s,
		paid: 0n
	};
	let largest = ids[0];
	const adds = {};
	let allocated = 0n;
	for (const id of ids) {
		const have = BigInt(s.stake[id] ?? "0");
		const share = paid * have / total;
		adds[id] = share;
		allocated += share;
		if (have > BigInt(s.stake[largest] ?? "0")) largest = id;
	}
	adds[largest] = (adds[largest] ?? 0n) + (paid - allocated);
	let next = setBal(s, "treasury", treasury.q - paid, treasury.usdq);
	const stake = { ...next.stake };
	for (const id of ids) stake[id] = (BigInt(stake[id] ?? "0") + (adds[id] ?? 0n)).toString();
	return {
		state: {
			...next,
			stake
		},
		paid
	};
}
function seal(s, rng, now, market) {
	let next = market ? runMarket(s, rng) : s;
	const emitted = payEmission(next);
	next = emitted.state;
	const producer = pickProducer(next, rng);
	const fees = BigInt(next.feePot);
	if (fees > 0n) {
		const stake = { ...next.stake };
		stake[producer] = (BigInt(stake[producer] ?? "0") + fees).toString();
		next = {
			...next,
			stake,
			feePot: "0"
		};
	}
	const height = next.height + 1;
	const txs = next.pending.map((tx) => ({
		...tx,
		block: height,
		time: now
	}));
	const hash = mixHash([
		"q-block",
		String(height),
		next.parent,
		producer,
		String(now),
		emitted.paid.toString(),
		fees.toString(),
		txs.map((tx) => tx.hash).join(",")
	]);
	const price = spotPrice(next);
	const mineAdd = txs.filter((tx) => tx.parties.includes("you"));
	return {
		...next,
		height,
		parent: hash,
		pending: [],
		prices: [...next.prices, price].slice(-48),
		blocks: [{
			height,
			hash,
			parent: next.parent,
			time: now,
			producer,
			emission: emitted.paid.toString(),
			fees: fees.toString(),
			txs
		}, ...next.blocks].slice(0, 36),
		mine: [...mineAdd, ...next.mine].slice(0, 40)
	};
}
function runMarket(s, rng) {
	let next = s;
	const swaps = rng() < .62 ? 2 : 1;
	for (let i = 0; i < swaps; i++) {
		const swapped = tryMarketSwap(next, rng);
		if (swapped) next = swapped;
	}
	if (rng() < .42) {
		const moved = tryDeskTransfer(next, rng);
		if (moved) next = moved;
	}
	if (rng() < .1) {
		const gift = tryGift(next, rng);
		if (gift) next = gift;
	}
	return next;
}
function tryMarketSwap(s, rng) {
	const mid = spotPrice(s);
	const sellQ = rng() < (mid > 4 ? .82 : mid < 4 ? .18 : .5);
	const choices = DESK_IDS.filter((id) => {
		const b = bal(s, id);
		return sellQ ? b.q > whole(80n) : b.usdq > whole(80n);
	});
	if (choices.length === 0) return null;
	const id = choices[Math.floor(rng() * choices.length)] ?? choices[0];
	const reserveIn = BigInt(sellQ ? s.poolQ : s.poolUsdq);
	const bps = 20 + Math.floor(rng() * 60);
	let amount = reserveIn * BigInt(bps) / 10000n;
	const cap = (sellQ ? bal(s, id).q : bal(s, id).usdq) * 25n / 100n;
	if (amount > cap) amount = cap;
	if (amount < whole(8n)) return null;
	const pay = sellQ ? "q" : "usdq";
	let tryAmt = amount;
	for (let i = 0; i < 4; i++) {
		const res = applySwap(s, id, pay, tryAmt, false);
		if (res.ok) return res.state;
		tryAmt /= 2n;
		if (tryAmt < whole(8n)) return null;
	}
	return null;
}
function tryDeskTransfer(s, rng) {
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
function tryGift(s, rng) {
	const from = DESK_IDS[Math.floor(rng() * DESK_IDS.length)] ?? "harbor";
	const amt = whole(1n + BigInt(Math.floor(rng() * 6)));
	const sender = bal(s, from);
	if (sender.q < amt + whole(1000n)) return null;
	let next = setBal(s, from, sender.q - amt, sender.usdq);
	const you = bal(next, "you");
	next = setBal(next, "you", you.q + amt, you.usdq);
	const summary = `${partyName(from, "subj")} sent you ${formatAmount(amt)} Q`;
	return enqueue(next, "transfer", from, summary, [from, "you"]);
}
function createGenesis() {
	let s = applyEndowment(bare());
	s = seal(s, () => 0, 0, false);
	const rng = mulberry32(20849);
	for (let i = 0; i < 18; i++) s = seal(s, rng, 0, true);
	return {
		...s,
		mark: spotPrice(s)
	};
}
function fail(error) {
	return {
		ok: false,
		error
	};
}
function done(s) {
	return {
		ok: true,
		summary: s.mine[0]?.summary ?? "Sealed",
		height: s.height,
		state: s
	};
}
function applySwap(s, id, pay, amountIn, gas) {
	if (amountIn <= 0n) return {
		ok: false,
		error: "Enter an amount."
	};
	const who = bal(s, id);
	const gasCost = gas ? GAS : 0n;
	if (pay === "q" && who.q < amountIn + gasCost) return {
		ok: false,
		error: gas ? "Not enough Q for the trade and the 0.05 fee." : "Not enough Q."
	};
	if (pay === "usdq" && who.usdq < amountIn) return {
		ok: false,
		error: "Not enough USDQ."
	};
	if (who.q < gasCost) return {
		ok: false,
		error: "Not enough Q to pay the 0.05 fee."
	};
	const poolQ = BigInt(s.poolQ);
	const poolU = BigInt(s.poolUsdq);
	const reserveIn = pay === "q" ? poolQ : poolU;
	const reserveOut = pay === "q" ? poolU : poolQ;
	const amountOut = quoteOut(amountIn, reserveIn, reserveOut);
	if (amountOut <= 0n) return {
		ok: false,
		error: "That amount is too small to clear the pool."
	};
	if (reserveOut - amountOut < MIN_POOL) return {
		ok: false,
		error: "The pool can't take a trade that large."
	};
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
		feePot: (BigInt(next.feePot) + gasCost).toString()
	};
	const summary = pay === "q" ? `${partyName(id, "subj")} sold ${formatAmount(amountIn)} Q for ${formatAmount(amountOut)} USDQ` : `${partyName(id, "subj")} bought ${formatAmount(amountOut)} Q for ${formatAmount(amountIn)} USDQ`;
	return {
		ok: true,
		state: enqueue(next, "swap", id, summary, [id]),
		amountOut
	};
}
function previewSwap(s, pay, amountIn) {
	const mid = spotPrice(s);
	const who = bal(s, "you");
	const applied = applySwap(s, "you", pay, amountIn, true);
	if (!applied.ok) return applied;
	const after = bal(applied.state, "you");
	const amountOut = pay === "q" ? after.usdq - who.usdq : after.q + GAS - who.q;
	const next = spotPrice(applied.state);
	return {
		ok: true,
		amountOut,
		impact: mid > 0 ? (next - mid) / mid : 0
	};
}
function userSwap(s, pay, amountIn, now, rng) {
	const applied = applySwap(s, "you", pay, amountIn, true);
	if (!applied.ok) return applied;
	return done(seal(applied.state, rng, now, false));
}
function resolveDest(s, to) {
	const trimmed = to.trim();
	if (!trimmed) return fail("Choose who receives it.");
	if (trimmed === "you" || trimmed === "q1e7c0ffee") return fail("That is already your seat.");
	const byId = s.accounts.find((a) => a.id === trimmed);
	const byAddr = s.accounts.find((a) => a.address === trimmed);
	const found = byId ?? byAddr;
	if (found) {
		if (found.id === "you") return fail("That is already your seat.");
		if (found.id === "treasury") return fail("The treasury doesn't take transfers. Stake, or take a drip.");
		return {
			ok: true,
			state: s,
			id: found.id
		};
	}
	if (!/^q1[a-f0-9]{8}$/.test(trimmed)) return fail("Addresses on Q look like q1 plus eight hex characters.");
	if (s.accounts.length >= 18) return fail("Too many outside seats in this browser. Reset the chain to clear them.");
	return {
		ok: true,
		id: trimmed,
		state: {
			...s,
			accounts: [...s.accounts, account(trimmed, label(trimmed), trimmed, 0n, 0n)]
		}
	};
}
function userTransfer(s, to, amount, now, rng) {
	if (amount <= 0n) return fail("Enter an amount.");
	const dest = resolveDest(s, to);
	if (!dest.ok) return dest;
	const who = bal(dest.state, "you");
	if (who.q < amount + 50000n) return fail("Not enough Q for the send and the 0.05 fee.");
	let next = setBal(dest.state, "you", who.q - amount - GAS, who.usdq);
	const recv = bal(next, dest.id);
	next = setBal(next, dest.id, recv.q + amount, recv.usdq);
	next = {
		...next,
		feePot: (BigInt(next.feePot) + GAS).toString()
	};
	const summary = `${partyName("you", "subj")} sent ${partyName(dest.id, "obj")} ${formatAmount(amount)} Q`;
	next = enqueue(next, "transfer", "you", summary, ["you", dest.id]);
	return done(seal(next, rng, now, false));
}
function applyAdd(s, qIn) {
	if (qIn <= 0n) return fail("Enter an amount of Q.");
	const who = bal(s, "you");
	if (who.q < qIn + 50000n) return fail("Not enough Q for the deposit and the 0.05 fee.");
	const poolQ = BigInt(s.poolQ);
	const poolU = BigInt(s.poolUsdq);
	const supply = BigInt(s.lpSupply);
	if (poolQ === 0n || poolU === 0n || supply === 0n) return fail("The pool is empty.");
	const uIn = qIn * poolU / poolQ;
	if (uIn <= 0n) return fail("That amount is too small to mint a share.");
	if (who.usdq < uIn) return fail("Not enough USDQ to match that Q at the pool price.");
	const shares = qIn * supply / poolQ;
	if (shares <= 0n) return fail("That amount is too small to mint a share.");
	const youLp = BigInt(s.lp.you ?? "0") + shares;
	let next = setBal(s, "you", who.q - qIn - GAS, who.usdq - uIn);
	next = {
		...next,
		poolQ: (poolQ + qIn).toString(),
		poolUsdq: (poolU + uIn).toString(),
		lpSupply: (supply + shares).toString(),
		lp: {
			...s.lp,
			you: youLp.toString()
		},
		feePot: (BigInt(next.feePot) + GAS).toString()
	};
	const summary = `You added ${formatAmount(qIn)} Q and ${formatAmount(uIn)} USDQ to the pool`;
	return {
		ok: true,
		state: enqueue(next, "add", "you", summary, ["you"])
	};
}
function previewAdd(s, qIn) {
	const beforeLp = BigInt(s.lp.you ?? "0");
	const applied = applyAdd(s, qIn);
	if (!applied.ok) return applied;
	return {
		ok: true,
		usdq: bal(s, "you").usdq - bal(applied.state, "you").usdq,
		shares: BigInt(applied.state.lp.you ?? "0") - beforeLp
	};
}
function userAdd(s, qIn, now, rng) {
	const applied = applyAdd(s, qIn);
	if (!applied.ok) return applied;
	return done(seal(applied.state, rng, now, false));
}
function userRemove(s, bps, now, rng) {
	if (bps <= 0 || bps > 1e4) return fail("Choose how much of your position to take out.");
	const who = bal(s, "you");
	if (who.q < 50000n) return fail("You need 0.05 Q liquid to pay the fee.");
	const supply = BigInt(s.lpSupply);
	const have = BigInt(s.lp.you ?? "0");
	if (have === 0n || supply === 0n) return fail("You don't have a pool position.");
	const shares = have * BigInt(bps) / 10000n;
	if (shares <= 0n) return fail("That slice is too small to withdraw.");
	const poolQ = BigInt(s.poolQ);
	const poolU = BigInt(s.poolUsdq);
	const qOut = shares * poolQ / supply;
	const uOut = shares * poolU / supply;
	if (qOut <= 0n || uOut <= 0n) return fail("That slice is too small to withdraw.");
	if (poolQ - qOut < MIN_POOL || poolU - uOut < MIN_POOL) return fail("Leave the pool enough depth to keep pricing.");
	let next = setBal(s, "you", who.q - GAS + qOut, who.usdq + uOut);
	next = {
		...next,
		poolQ: (poolQ - qOut).toString(),
		poolUsdq: (poolU - uOut).toString(),
		lpSupply: (supply - shares).toString(),
		lp: {
			...s.lp,
			you: (have - shares).toString()
		},
		feePot: (BigInt(s.feePot) + GAS).toString()
	};
	const summary = `You took ${formatAmount(qOut)} Q and ${formatAmount(uOut)} USDQ out of the pool`;
	next = enqueue(next, "remove", "you", summary, ["you"]);
	return done(seal(next, rng, now, false));
}
function userStake(s, amount, now, rng) {
	if (amount <= 0n) return fail("Enter an amount.");
	const who = bal(s, "you");
	if (who.q < amount + 50000n) return fail("Not enough Q for the stake and the 0.05 fee.");
	if (who.q < amount + 50000n * 2n) return fail("Leave 0.05 Q liquid so you can unstake later.");
	let next = setBal(s, "you", who.q - amount - GAS, who.usdq);
	const stake = {
		...next.stake,
		you: (BigInt(next.stake.you ?? "0") + amount).toString()
	};
	next = {
		...next,
		stake,
		feePot: (BigInt(next.feePot) + GAS).toString()
	};
	const summary = `You staked ${formatAmount(amount)} Q`;
	next = enqueue(next, "stake", "you", summary, ["you"]);
	return done(seal(next, rng, now, false));
}
function userUnstake(s, amount, now, rng) {
	if (amount <= 0n) return fail("Enter an amount.");
	const who = bal(s, "you");
	const staked = BigInt(s.stake.you ?? "0");
	if (staked < amount) return fail("That is more than your seat has staked.");
	if (who.q < 50000n) return fail("You need 0.05 Q liquid to pay the fee and unstake.");
	let next = setBal(s, "you", who.q - GAS + amount, who.usdq);
	const stake = {
		...next.stake,
		you: (staked - amount).toString()
	};
	next = {
		...next,
		stake,
		feePot: (BigInt(next.feePot) + GAS).toString()
	};
	const summary = `You unstaked ${formatAmount(amount)} Q`;
	next = enqueue(next, "unstake", "you", summary, ["you"]);
	return done(seal(next, rng, now, false));
}
function userDrip(s, now, rng) {
	if (s.dripAt !== 0 && now < s.dripAt + 45e3) return fail(`The drip opens again in ${Math.max(1, Math.ceil((s.dripAt + DRIP_COOL_MS - now) / 1e3))}s.`);
	const treasury = bal(s, "treasury");
	if (treasury.q < 50000000n) return fail("The treasury has no Q left to drip.");
	if (totalUsdq(s) + 200000000n > USDQ_CAP) return fail("The mint has issued all the USDQ it will.");
	const you = bal(s, "you");
	let next = setBal(s, "treasury", treasury.q - DRIP_Q, treasury.usdq);
	next = setBal(next, "you", you.q + DRIP_Q, you.usdq + DRIP_USDQ);
	next = {
		...next,
		dripAt: now
	};
	const summary = `You took a drip of ${formatAmount(DRIP_Q)} Q and ${formatAmount(DRIP_USDQ)} USDQ`;
	next = enqueue(next, "drip", "you", summary, ["you"]);
	return done(seal(next, rng, now, false));
}
function spotPrice(s) {
	const q = BigInt(s.poolQ);
	if (q === 0n) return 0;
	return Number(BigInt(s.poolUsdq)) / Number(q);
}
function totalQ(s) {
	let t = BigInt(s.poolQ) + BigInt(s.feePot);
	for (const a of s.accounts) t += BigInt(a.q);
	for (const v of Object.values(s.stake)) t += BigInt(v);
	return t;
}
function totalUsdq(s) {
	let t = BigInt(s.poolUsdq);
	for (const a of s.accounts) t += BigInt(a.usdq);
	return t;
}
function totalStake(s) {
	return Object.values(s.stake).reduce((sum, v) => sum + BigInt(v), 0n);
}
function maxAddQ(s) {
	const you = bal(s, "you");
	const poolQ = BigInt(s.poolQ);
	const poolU = BigInt(s.poolUsdq);
	if (poolQ === 0n || poolU === 0n) return 0n;
	const qBal = you.q > 50000n ? you.q - GAS : 0n;
	const affordable = you.usdq * poolQ / poolU;
	return qBal < affordable ? qBal : affordable;
}
function maxStake(qBal) {
	const reserve = GAS * 2n;
	return qBal > reserve ? qBal - reserve : 0n;
}
function lpPosition(s) {
	const shares = BigInt(s.lp.you ?? "0");
	const supply = BigInt(s.lpSupply);
	if (shares === 0n || supply === 0n) return {
		shares: 0n,
		q: 0n,
		usdq: 0n,
		pct: 0
	};
	return {
		shares,
		q: shares * BigInt(s.poolQ) / supply,
		usdq: shares * BigInt(s.poolUsdq) / supply,
		pct: Number(shares) / Number(supply) * 100
	};
}
function balanceRows(s) {
	const known = /* @__PURE__ */ new Set([
		"you",
		"harbor",
		"north",
		"lumen",
		"treasury"
	]);
	const rows = [
		{
			id: "you",
			name: "You",
			q: bal(s, "you").q
		},
		...DESKS.map((d) => ({
			id: d.id,
			name: d.name,
			q: bal(s, d.id).q
		})),
		{
			id: "pool",
			name: "Pool",
			q: BigInt(s.poolQ)
		},
		{
			id: "stake",
			name: "Staked",
			q: totalStake(s)
		}
	];
	for (const a of s.accounts) if (!known.has(a.id)) rows.push({
		id: a.id,
		name: a.name,
		q: BigInt(a.q)
	});
	rows.push({
		id: "treasury",
		name: "Treasury",
		q: bal(s, "treasury").q
	});
	return rows;
}
function recentTxs(s, n = 6) {
	const out = [];
	for (const block of s.blocks) for (const tx of block.txs) {
		out.push(tx);
		if (out.length >= n) return out;
	}
	return out;
}
var STORAGE_KEY = "q-chain-v1";
function snapshot(s) {
	return {
		version: s.version,
		height: s.height,
		parent: s.parent,
		feePot: s.feePot,
		accounts: s.accounts,
		poolQ: s.poolQ,
		poolUsdq: s.poolUsdq,
		lpSupply: s.lpSupply,
		lp: s.lp,
		stake: s.stake,
		dripAt: s.dripAt,
		mark: s.mark,
		prices: s.prices,
		blocks: s.blocks,
		mine: s.mine,
		pending: s.pending,
		nonce: s.nonce
	};
}
function readSave() {
	if (typeof localStorage === "undefined") return null;
	try {
		const raw = localStorage.getItem(STORAGE_KEY);
		if (!raw) return null;
		const parsed = JSON.parse(raw);
		if (parsed.version !== 1 || !Array.isArray(parsed.accounts) || !Array.isArray(parsed.blocks)) return null;
		if (typeof parsed.poolQ !== "string" || typeof parsed.stake?.you !== "string") return null;
		BigInt(parsed.poolQ);
		BigInt(parsed.poolUsdq);
		BigInt(parsed.lpSupply);
		for (const account of parsed.accounts) {
			BigInt(account.q);
			BigInt(account.usdq);
		}
		return parsed;
	} catch {
		return null;
	}
}
function persist(next) {
	try {
		if (typeof localStorage !== "undefined") localStorage.setItem(STORAGE_KEY, JSON.stringify(next));
	} catch {}
}
var useChain = create((set, get) => {
	const commit = (next) => {
		set({
			...next,
			hydrated: true
		});
		persist(next);
	};
	const settle = (res) => {
		if (!res.ok) return res;
		commit(res.state);
		return {
			ok: true,
			summary: res.summary,
			height: res.height
		};
	};
	const act = (run) => {
		if (!get().hydrated) return {
			ok: false,
			error: "The chain is still opening."
		};
		return settle(run(snapshot(get()), Date.now(), Math.random));
	};
	return {
		...createGenesis(),
		hydrated: false,
		focus: null,
		hydrate: () => {
			const loaded = readSave();
			if (!loaded && typeof localStorage !== "undefined") localStorage.removeItem(STORAGE_KEY);
			if (loaded) set({
				...loaded,
				hydrated: true
			});
			else set({ hydrated: true });
			persist(snapshot(get()));
		},
		tick: () => {
			if (!get().hydrated) return;
			commit(seal(snapshot(get()), Math.random, Date.now(), true));
		},
		setFocus: (focus) => set({ focus }),
		transfer: (to, amount) => act((s, now, rng) => userTransfer(s, to, amount, now, rng)),
		swap: (pay, amount) => act((s, now, rng) => userSwap(s, pay, amount, now, rng)),
		addLiquidity: (qAmount) => act((s, now, rng) => userAdd(s, qAmount, now, rng)),
		removeLiquidity: (bps) => act((s, now, rng) => userRemove(s, bps, now, rng)),
		lockStake: (amount) => act((s, now, rng) => userStake(s, amount, now, rng)),
		releaseStake: (amount) => act((s, now, rng) => userUnstake(s, amount, now, rng)),
		drip: () => act((s, now, rng) => userDrip(s, now, rng)),
		reset: () => {
			commit(createGenesis());
			set({ focus: null });
		}
	};
});
//#endregion
export { useChain as A, previewSwap as C, totalQ as D, spotPrice as E, totalStake as O, previewAdd as S, relTime as T, lpPosition as _, VALIDATORS as a, parseUnits as b, balanceRows as c, formatInt as d, formatPct as f, label as g, formatUnits as h, GAS as i, totalUsdq as k, formatAmount as l, formatShare as m, DESKS as n, YOU_ADDRESS as o, formatPrice as p, DRIP_COOL_MS as r, bal as s, BLOCK_MS as t, formatInput as u, maxAddQ as v, recentTxs as w, perMinute as x, maxStake as y };
