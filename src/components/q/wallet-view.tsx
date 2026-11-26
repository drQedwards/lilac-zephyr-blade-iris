import { useState } from "react";
import { toast } from "sonner";
import { Copy } from "lucide-react";
import { bal } from "@/lib/q/engine";
import { useChain } from "@/lib/q/store";
import { DESKS, YOU_ADDRESS } from "@/lib/q/types";
import { DRIP_COOL_MS, GAS, formatAmount, formatInput, formatUnits, parseUnits, relTime } from "@/lib/q/units";
import { AmountField, Button, Notice, Page, useNow } from "./ui";

export function WalletView() {
  const chain = useChain();
  const now = useNow();
  const you = bal(chain, "you");
  const [to, setTo] = useState<string>("harbor");
  const [custom, setCustom] = useState("");
  const [amount, setAmount] = useState("");
  const [error, setError] = useState("");
  const [armed, setArmed] = useState(false);
  const dest = to === "custom" ? custom : to;
  const cool = chain.dripAt && now ? Math.max(0, chain.dripAt + DRIP_COOL_MS - now) : 0;

  function send() {
    const parsed = parseUnits(amount);
    if (!parsed) {
      setError("Enter an amount of Q.");
      return;
    }
    const res = useChain.getState().transfer(dest, parsed);
    if (!res.ok) {
      setError(res.error);
      return;
    }
    setError("");
    setAmount("");
    toast(res.summary);
  }

  return (
    <Page
      eyebrow="Wallet"
      title="Your seat"
      lede="Send Q to a desk or any q1 address. The treasury will also drip new money, about once a minute."
    >
      <section className="grid gap-6 border-y border-line py-5 sm:grid-cols-2">
        <div>
          <p className="text-sm text-muted">Q</p>
          <p className="mt-1 font-serif text-4xl tabular-nums">{formatUnits(you.q)}</p>
        </div>
        <div>
          <p className="text-sm text-muted">USDQ</p>
          <p className="mt-1 font-serif text-4xl tabular-nums">{formatUnits(you.usdq)}</p>
        </div>
      </section>

      <section className="flex flex-col gap-2">
        <p className="text-sm text-muted">Address</p>
        <div className="flex flex-wrap items-center gap-3">
          <p className="font-mono text-sm break-all">{YOU_ADDRESS}</p>
          <button
            type="button"
            className="inline-flex min-h-11 items-center gap-2 text-sm text-gold"
            onClick={() => {
              void navigator.clipboard?.writeText(YOU_ADDRESS).then(
                () => toast("Address copied"),
                () => toast(YOU_ADDRESS),
              );
            }}
          >
            <Copy className="size-4" aria-hidden="true" />
            Copy
          </button>
        </div>
      </section>

      <form
        className="flex max-w-md flex-col gap-4"
        onSubmit={(event) => {
          event.preventDefault();
          send();
        }}
      >
        <h2 className="text-2xl">Send</h2>
        <div className="flex flex-wrap gap-2">
          {DESKS.map((desk) => (
            <button
              key={desk.id}
              type="button"
              onClick={() => setTo(desk.id)}
              className={`min-h-11 rounded-full border px-4 text-sm ${to === desk.id ? "border-gold text-paper" : "border-line text-muted"}`}
            >
              {desk.name}
            </button>
          ))}
          <button
            type="button"
            onClick={() => setTo("custom")}
            className={`min-h-11 rounded-full border px-4 text-sm ${to === "custom" ? "border-gold text-paper" : "border-line text-muted"}`}
          >
            Address
          </button>
        </div>
        {to === "custom" ? (
          <div className="flex flex-col gap-2">
            <label htmlFor="addr" className="text-sm text-muted">
              Recipient address
            </label>
            <input
              id="addr"
              value={custom}
              autoComplete="off"
              spellCheck={false}
              onChange={(event) => setCustom(event.target.value.trim())}
              placeholder="q1........"
              className="min-h-12 rounded-lg border border-line bg-ink px-3 font-mono text-sm outline-none focus:border-gold"
            />
          </div>
        ) : null}
        <AmountField
          id="send-amount"
          label="Amount"
          suffix="Q"
          value={amount}
          onChange={setAmount}
          onMax={() => setAmount(formatInput(you.q > GAS ? you.q - GAS : 0n))}
        />
        <p className="text-sm text-faint">Fee {formatAmount(GAS)} Q, paid to whoever seals the block.</p>
        <Notice>{error}</Notice>
        <Button type="submit" disabled={!chain.hydrated}>
          Send Q
        </Button>
      </form>

      <section className="flex max-w-md flex-col gap-3 border-t border-line pt-6">
        <h2 className="text-2xl">Drip</h2>
        <p className="text-muted">50 Q from the treasury, and 200 newly minted USDQ.</p>
        <Button
          type="button"
          variant="ghost"
          disabled={!chain.hydrated || cool > 0}
          onClick={() => {
            const res = useChain.getState().drip();
            if (!res.ok) setError(res.error);
            else {
              setError("");
              toast(res.summary);
            }
          }}
        >
          {cool > 0 ? `Drip in ${Math.ceil(cool / 1000)}s` : "Take a drip"}
        </Button>
      </section>

      <section>
        <h2 className="text-2xl">Your ledger</h2>
        <ul className="mt-3">
          {chain.mine.length === 0 ? (
            <li className="border-b border-line py-3 text-muted">Nothing with your name on it yet.</li>
          ) : (
            chain.mine.map((tx) => (
              <li key={tx.hash} className="flex items-baseline justify-between gap-4 border-b border-line py-3">
                <span>
                  {tx.summary}
                  <span className="mt-1 block text-xs text-faint">
                    Block {tx.block || "—"} · {relTime(tx.time, now)}
                  </span>
                </span>
                <span className="shrink-0 font-mono text-xs text-faint">{tx.hash.slice(0, 8)}</span>
              </li>
            ))
          )}
        </ul>
      </section>

      <section className="flex flex-col items-start gap-3">
        {armed ? (
          <div className="flex flex-wrap gap-2">
            <Button
              type="button"
              variant="ghost"
              onClick={() => {
                useChain.getState().reset();
                setArmed(false);
                setError("");
                toast("Chain reset to genesis");
              }}
            >
              Yes, back to genesis
            </Button>
            <Button type="button" variant="ghost" onClick={() => setArmed(false)}>
              Keep it
            </Button>
          </div>
        ) : (
          <button type="button" className="min-h-11 text-sm text-faint" onClick={() => setArmed(true)}>
            Reset this chain
          </button>
        )}
      </section>
    </Page>
  );
}
