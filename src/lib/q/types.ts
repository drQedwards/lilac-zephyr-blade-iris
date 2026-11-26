export type Asset = "q" | "usdq";

export type TxKind = "transfer" | "swap" | "add" | "remove" | "stake" | "unstake" | "drip";

export interface Account {
  id: string;
  name: string;
  address: string;
  q: string;
  usdq: string;
}

export interface ChainTx {
  hash: string;
  block: number;
  time: number;
  kind: TxKind;
  summary: string;
  actor: string;
  parties: string[];
}

export interface ChainBlock {
  height: number;
  hash: string;
  parent: string;
  time: number;
  producer: string;
  emission: string;
  fees: string;
  txs: ChainTx[];
}

export interface State {
  version: 1;
  height: number;
  parent: string;
  feePot: string;
  accounts: Account[];
  poolQ: string;
  poolUsdq: string;
  lpSupply: string;
  lp: Record<string, string>;
  stake: Record<string, string>;
  dripAt: number;
  mark: number;
  prices: number[];
  blocks: ChainBlock[];
  mine: ChainTx[];
  pending: ChainTx[];
  nonce: number;
}

export interface ActionOk {
  ok: true;
  summary: string;
  height: number;
  state: State;
}

export interface ActionErr {
  ok: false;
  error: string;
}

export type ActionResult = ActionOk | ActionErr;

export const CHAIN_ID = "q-1";
export const YOU_ADDRESS = "q1e7c0ffee";

export const DESKS = [
  { id: "harbor", name: "Harbor", address: "q1a11ce001" },
  { id: "north", name: "North Desk", address: "q1b04d0002" },
  { id: "lumen", name: "Lumen", address: "q1c0de0003" },
] as const;

export const VALIDATORS = [
  { id: "quorum", name: "Quorum" },
  { id: "aurum", name: "Aurum" },
  { id: "keystone", name: "Keystone" },
  { id: "copperwell", name: "Copperwell" },
] as const;

const NAMES: Record<string, string> = {
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
  protocol: "Protocol",
};

export function label(id: string): string {
  return NAMES[id] ?? (id.startsWith("q1") ? `${id.slice(0, 6)}…${id.slice(-3)}` : id);
}

export function partyName(id: string, role: "subj" | "obj"): string {
  if (id === "you") return role === "subj" ? "You" : "you";
  return label(id);
}
