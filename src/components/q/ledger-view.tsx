import { useChain } from "@/lib/q/store";
import { label } from "@/lib/q/types";
import { formatAmount, formatInt, relTime } from "@/lib/q/units";
import { Page, useNow } from "./ui";

export function LedgerView() {
  const chain = useChain();
  const now = useNow();
  const setFocus = useChain((s) => s.setFocus);
  const block = chain.blocks.find((item) => item.height === chain.focus) ?? chain.blocks[0];

  return (
    <Page eyebrow="Explorer" title="Ledger" lede="Every sealed block still held in this browser, newest first.">
      {block ? (
        <div className="grid items-start gap-8 lg:grid-cols-[minmax(0,1fr)_260px]">
          <article className="flex flex-col gap-4">
            <header>
              <h2 className="text-3xl tabular-nums">Block {formatInt(block.height)}</h2>
              <p className="mt-2 text-muted">
                {label(block.producer)} sealed it{block.time === 0 ? " before you arrived" : ""}.{" "}
                {relTime(block.time, now)}.
              </p>
            </header>
            <dl className="grid gap-3 text-sm sm:grid-cols-2">
              <div>
                <dt className="text-faint">Hash</dt>
                <dd className="mt-1 font-mono break-all text-paper">{block.hash}</dd>
              </div>
              <div>
                <dt className="text-faint">Parent</dt>
                <dd className="mt-1 font-mono break-all">{block.parent}</dd>
              </div>
              <div>
                <dt className="text-faint">Emission to stake</dt>
                <dd className="mt-1 tabular-nums">{formatAmount(BigInt(block.emission))} Q</dd>
              </div>
              <div>
                <dt className="text-faint">Fees to producer</dt>
                <dd className="mt-1 tabular-nums">{formatAmount(BigInt(block.fees))} Q</dd>
              </div>
            </dl>
            <ul>
              {block.txs.length === 0 ? (
                <li className="border-t border-line py-3 text-muted">No transfers. Stake was still paid.</li>
              ) : (
                block.txs.map((tx) => (
                  <li key={tx.hash} className="border-t border-line py-3">
                    <p>{tx.summary}</p>
                    <p className="mt-1 font-mono text-xs text-faint">{tx.hash}</p>
                  </li>
                ))
              )}
            </ul>
          </article>
          <div className="lg:max-h-[32rem] lg:overflow-y-auto">
            {chain.blocks.map((item) => {
              const active = item.height === block.height;
              return (
                <button
                  key={item.hash}
                  type="button"
                  onClick={() => setFocus(item.height)}
                  className={`flex min-h-11 w-full items-baseline justify-between gap-3 border-b border-line py-3 text-left ${active ? "text-paper" : "text-muted"}`}
                >
                  <span className="font-mono text-sm tabular-nums">{formatInt(item.height)}</span>
                  <span className="flex-1 truncate text-sm">{label(item.producer)}</span>
                  <span className="text-sm tabular-nums">{item.txs.length}</span>
                </button>
              );
            })}
          </div>
        </div>
      ) : (
        <p className="text-muted">No blocks yet.</p>
      )}
    </Page>
  );
}
