import { balanceRows, recentTxs, spotPrice, totalQ, totalStake, totalUsdq } from "@/lib/q/engine";
import { useChain } from "@/lib/q/store";
import { formatAmount, formatPct, formatPrice, relTime } from "@/lib/q/units";
import { BlockStrip, PriceChart, useNow } from "./ui";

export function MintView() {
  const chain = useChain();
  const now = useNow();
  const price = spotPrice(chain);
  const change = chain.mark ? (price - chain.mark) / chain.mark : 0;
  const tone = change > 0 ? "text-gold" : change < 0 ? "text-copper" : "text-faint";
  const rows = balanceRows(chain);
  const txs = recentTxs(chain, 6);

  return (
    <div className="flex w-full flex-col gap-8 py-8 md:gap-10 md:py-10">
      <header className="flex flex-col gap-3">
        <p className="text-sm text-muted">Spot · 1 Q</p>
        <h1 className="text-6xl tabular-nums md:text-8xl">
          {formatPrice(price)}
          <span className="ml-3 font-sans text-lg font-normal text-muted md:text-2xl">USDQ</span>
        </h1>
        <p className={`text-sm tabular-nums ${tone}`}>{formatPct(change)} since you arrived</p>
        <p className="max-w-xl text-muted">
          The pool sets the price. Harbor, North Desk, and Lumen trade toward 4 USDQ, and a block seals every few
          seconds.
        </p>
      </header>

      <BlockStrip />

      <dl className="grid grid-cols-2 gap-x-6 gap-y-5 border-y border-line py-5 md:grid-cols-4">
        <Stat label="Q outstanding" value={formatAmount(totalQ(chain))} />
        <Stat label="USDQ issued" value={formatAmount(totalUsdq(chain))} />
        <Stat label="Q in the pool" value={formatAmount(BigInt(chain.poolQ))} />
        <Stat label="Q staked" value={formatAmount(totalStake(chain))} />
      </dl>

      <section className="flex flex-col gap-3">
        <h2 className="text-2xl">Tape</h2>
        <PriceChart prices={chain.prices} labelText={`Q price tape, last print ${formatPrice(price)} USDQ`} />
      </section>

      <section className="grid gap-8 lg:grid-cols-2">
        <div>
          <h2 className="text-2xl">Where Q sits</h2>
          <ul className="mt-3">
            {rows.map((row) => (
              <li key={row.id} className="flex items-baseline justify-between gap-4 border-b border-line py-3">
                <span>{row.name}</span>
                <span className="font-mono text-sm tabular-nums text-muted">{formatAmount(row.q)}</span>
              </li>
            ))}
          </ul>
        </div>
        <div>
          <h2 className="text-2xl">Latest settlement</h2>
          <ul className="mt-3">
            {txs.length === 0 ? (
              <li className="border-b border-line py-3 text-muted">The chain is quiet.</li>
            ) : (
              txs.map((tx) => (
                <li key={tx.hash} className="flex items-baseline justify-between gap-4 border-b border-line py-3">
                  <span>
                    {tx.summary}
                    <span className="mt-1 block text-xs text-faint">{relTime(tx.time, now)}</span>
                  </span>
                  <span className="shrink-0 font-mono text-xs text-faint" title={tx.hash}>
                    {tx.hash.slice(0, 8)}
                  </span>
                </li>
              ))
            )}
          </ul>
        </div>
      </section>
    </div>
  );
}

function Stat({ label, value }: { label: string; value: string }) {
  return (
    <div>
      <dt className="text-sm text-muted">{label}</dt>
      <dd className="mt-1 font-serif text-2xl tabular-nums">{value}</dd>
    </div>
  );
}
