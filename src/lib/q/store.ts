import { create } from "zustand";
import {
  createGenesis,
  seal,
  userAdd,
  userDrip,
  userRemove,
  userStake,
  userSwap,
  userTransfer,
  userUnstake,
} from "./engine";
import type { Asset, State } from "./types";

const STORAGE_KEY = "q-chain-v1";

export interface ClientOk {
  ok: true;
  summary: string;
  height: number;
}

export interface ClientErr {
  ok: false;
  error: string;
}

export type ClientResult = ClientOk | ClientErr;

type EngineResult = ReturnType<typeof userSwap>;

type Store = State & {
  hydrated: boolean;
  focus: number | null;
  hydrate: () => void;
  tick: () => void;
  setFocus: (height: number | null) => void;
  transfer: (to: string, amount: bigint) => ClientResult;
  swap: (pay: Asset, amount: bigint) => ClientResult;
  addLiquidity: (qAmount: bigint) => ClientResult;
  removeLiquidity: (bps: number) => ClientResult;
  lockStake: (amount: bigint) => ClientResult;
  releaseStake: (amount: bigint) => ClientResult;
  drip: () => ClientResult;
  reset: () => void;
};

function snapshot(s: Store): State {
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
    nonce: s.nonce,
  };
}

function readSave(): State | null {
  if (typeof localStorage === "undefined") return null;
  try {
    const raw = localStorage.getItem(STORAGE_KEY);
    if (!raw) return null;
    const parsed = JSON.parse(raw) as State;
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

function persist(next: State) {
  try {
    if (typeof localStorage !== "undefined") localStorage.setItem(STORAGE_KEY, JSON.stringify(next));
  } catch {
    /* quota or private mode */
  }
}

export const useChain = create<Store>((set, get) => {
  const commit = (next: State) => {
    set({ ...next, hydrated: true });
    persist(next);
  };

  const settle = (res: EngineResult): ClientResult => {
    if (!res.ok) return res;
    commit(res.state);
    return { ok: true, summary: res.summary, height: res.height };
  };

  const act = (run: (s: State, now: number, rng: () => number) => EngineResult): ClientResult => {
    if (!get().hydrated) return { ok: false, error: "The chain is still opening." };
    return settle(run(snapshot(get()), Date.now(), Math.random));
  };

  return {
    ...createGenesis(),
    hydrated: false,
    focus: null,
    hydrate: () => {
      const loaded = readSave();
      if (!loaded && typeof localStorage !== "undefined") localStorage.removeItem(STORAGE_KEY);
      if (loaded) set({ ...loaded, hydrated: true });
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
    },
  };
});
