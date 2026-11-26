export const U = 1_000_000n;
export const GAS = 50_000n;
export const EMISSION = 2_000_000n;
export const DRIP_Q = 50_000_000n;
export const DRIP_USDQ = 200_000_000n;
export const DRIP_COOL_MS = 45_000;
export const BLOCK_MS = 3_200;
export const SUPPLY_Q = 21_000_000n * U;
export const USDQ_CAP = 2_000_000n * U;

export function whole(n: bigint): bigint {
  return n * U;
}

export function mulberry32(seed: number): () => number {
  let a = seed >>> 0;
  return () => {
    a |= 0;
    a = (a + 0x6d2b79f5) | 0;
    let t = Math.imul(a ^ (a >>> 15), 1 | a);
    t = (t + Math.imul(t ^ (t >>> 7), 61 | t)) ^ t;
    return ((t ^ (t >>> 14)) >>> 0) / 4294967296;
  };
}

export function mixHash(parts: string[]): string {
  let h1 = 0x811c9dc5;
  let h2 = 0x01000193;
  const s = parts.join("|");
  for (let i = 0; i < s.length; i++) {
    const c = s.charCodeAt(i);
    h1 = Math.imul(h1 ^ c, 0x01000193);
    h2 = Math.imul(h2 ^ c, 0x27d4eb2f);
  }
  return (h1 >>> 0).toString(16).padStart(8, "0") + (h2 >>> 0).toString(16).padStart(8, "0");
}

export function isqrt(n: bigint): bigint {
  if (n < 2n) return n < 0n ? 0n : n;
  let x = n;
  let y = (x + 1n) / 2n;
  while (y < x) {
    x = y;
    y = (x + n / x) / 2n;
  }
  return x;
}

function groupInt(digits: string): string {
  return digits.replace(/\B(?=(\d{3})+(?!\d))/g, ",");
}

export function formatUnits(v: bigint, digits = 2): string {
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

export function formatAmount(v: bigint): string {
  const raw = formatUnits(v, 4);
  const [head, frac] = raw.split(".");
  if (!frac) return head;
  const trimmed = frac.replace(/0+$/, "");
  return trimmed ? `${head}.${trimmed}` : head;
}

export function formatPrice(p: number): string {
  if (!Number.isFinite(p)) return "0.000";
  const sign = p < 0 ? "-" : "";
  const millis = Math.round(Math.abs(p) * 1000);
  const head = groupInt(String(Math.floor(millis / 1000)));
  const frac = (millis % 1000).toString().padStart(3, "0");
  return `${sign}${head}.${frac}`;
}

export function formatPct(frac: number): string {
  if (!Number.isFinite(frac) || frac === 0) return "0.00%";
  const sign = frac > 0 ? "+" : "-";
  const v = Math.round(Math.abs(frac) * 10000);
  const head = Math.floor(v / 100);
  const dec = (v % 100).toString().padStart(2, "0");
  return `${sign}${head}.${dec}%`;
}

export function formatInt(n: number): string {
  return groupInt(String(Math.max(0, Math.trunc(n))));
}

export function formatShare(pct: number): string {
  if (!Number.isFinite(pct) || pct <= 0) return "0%";
  const v = Math.round(pct * 10);
  const head = Math.floor(v / 10);
  const dec = v % 10;
  return dec === 0 ? `${head}%` : `${head}.${dec}%`;
}

export function parseUnits(input: string): bigint | null {
  const s = input.trim();
  if (!/^\d{1,12}(\.\d{0,6})?$/.test(s)) return null;
  const [w, f = ""] = s.split(".");
  const frac = (f + "000000").slice(0, 6);
  return BigInt(w) * U + BigInt(frac);
}

export function formatInput(v: bigint): string {
  if (v <= 0n) return "";
  const raw = formatUnits(v, 4);
  const [head, frac] = raw.replace(/,/g, "").split(".");
  if (!frac) return head;
  const trimmed = frac.replace(/0+$/, "");
  return trimmed ? `${head}.${trimmed}` : head;
}

export function quoteOut(amountIn: bigint, reserveIn: bigint, reserveOut: bigint): bigint {
  if (amountIn <= 0n || reserveIn <= 0n || reserveOut <= 0n) return 0n;
  const amountInWithFee = amountIn * 9970n;
  return (amountInWithFee * reserveOut) / (reserveIn * 10000n + amountInWithFee);
}

export function perMinute(your: bigint, total: bigint): bigint {
  if (your <= 0n || total <= 0n) return 0n;
  return (EMISSION * your * 60_000n) / (total * BigInt(BLOCK_MS));
}

export function relTime(t: number, now: number): string {
  if (t === 0) return "Earlier";
  if (!now) return "Just now";
  const s = Math.max(0, Math.round((now - t) / 1000));
  if (s < 5) return "Just now";
  if (s < 60) return `${s}s ago`;
  const m = Math.floor(s / 60);
  if (m < 60) return `${m}m ago`;
  const h = Math.floor(m / 60);
  return `${h}h ago`;
}
