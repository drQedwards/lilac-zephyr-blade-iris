import { useState } from "react";
import { toast } from "sonner";
import { bal, lpPosition, maxAddQ, previewAdd, previewSwap, spotPrice } from "@/lib/q/engine";
import { useChain } from "@/lib/q/store";
import type { Asset } from "@/lib/q/types";
import { GAS, formatAmount, formatInput, formatPct, formatPrice, formatShare, formatUnits, parseUnits } from "@/lib/q/units";
import { AmountField, Button, Notice, Page } from "./ui";

export function SwapView() {
  const chain = useChain();
  const [pay, setPay] = useState<Asset>("q");
  const [amount, setAmount] = useState("");
  const [liq, setLiq] = useState("");
  const [error, setError] = useState("");
  const you = bal(chain, "you");
  const parsed = parseUnits(amount);
  const preview = parsed && parsed > 0n ? previewSwap(chain, pay, parsed) : null;
  const liqParsed = parseUnits(liq);
  const liqPreview = liqParsed && liqParsed > 0n ? previewAdd(chain, liqParsed) : null;
  const position = lpPosition(chain);
  const price = spotPrice(chain);
  const maxPay = pay === "q" ? (you.q > GAS ? you.q - GAS : 0n) : you.usdq;

  return (
    <Page
      eyebrow="Exchange"
      title="Swap"
      lede="Trade against the pool. Liquidity you add earns the 0.30% fee the pool keeps on every swap."
    >
      <div className="grid items-start gap-10 lg:grid-cols-2">
        <form
          className="flex flex-col gap-4"
          onSubmit={(event) => {
            event.preventDefault();
            if (!parsed) {
              setError("Enter an amount.");
              return;
            }
            const res = useChain.getState().swap(pay, parsed);
            if (!res.ok) setError(res.error);
            else {
              setError("");
              setAmount("");
              toast(res.summary);
            }
          }}
        >
          <h2 className="text-2xl">Trade</h2>
          <div className="grid grid-cols-2 gap-1 rounded-xl bg-ink-2 p-1">
            <button
              type="button"
              onClick={() => setPay("q")}
              className={`min-h-11 rounded-lg text-sm ${pay === "q" ? "bg-panel text-paper" : "text-muted"}`}
            >
              Pay Q
            </button>
            <button
              type="button"
              onClick={() => setPay("usdq")}
              className={`min-h-11 rounded-lg text-sm ${pay === "usdq" ? "bg-panel text-paper" : "text-muted"}`}
            >
              Pay USDQ
            </button>
          </div>
          <AmountField
            id="swap-amount"
            label={pay === "q" ? "You pay Q" : "You pay USDQ"}
            suffix={pay === "q" ? "Q" : "USDQ"}
            value={amount}
            onChange={setAmount}
            onMax={() => setAmount(formatInput(maxPay))}
          />
          <div className="flex flex-col gap-1 text-sm text-muted">
            <p className="tabular-nums">
              You receive{" "}
              <span className="text-paper">
                {preview && preview.ok ? formatUnits(preview.amountOut) : "—"} {pay === "q" ? "USDQ" : "Q"}
              </span>
            </p>
            <p className="tabular-nums">
              Pool price {formatPrice(price)} · impact{" "}
              {preview && preview.ok ? formatPct(Math.abs(preview.impact)).replace("+", "") : "—"} · fee{" "}
              {formatAmount(GAS)} Q
            </p>
            <p>Desks lean the price back toward 4. Your quote is sealed when you submit.</p>
          </div>
          {preview && !preview.ok ? <Notice>{preview.error}</Notice> : <Notice>{error}</Notice>}
          <Button type="submit" disabled={!chain.hydrated}>
            {pay === "q" ? "Swap into USDQ" : "Swap into Q"}
          </Button>
        </form>

        <div className="flex flex-col gap-4">
          <h2 className="text-2xl">Pool</h2>
          <dl className="grid grid-cols-2 gap-4 border-y border-line py-4">
            <div>
              <dt className="text-sm text-muted">Q reserve</dt>
              <dd className="mt-1 font-serif text-2xl tabular-nums">{formatAmount(BigInt(chain.poolQ))}</dd>
            </div>
            <div>
              <dt className="text-sm text-muted">USDQ reserve</dt>
              <dd className="mt-1 font-serif text-2xl tabular-nums">{formatAmount(BigInt(chain.poolUsdq))}</dd>
            </div>
          </dl>
          <p className="text-sm text-muted">
            Your position {formatShare(position.pct)} · {formatAmount(position.q)} Q and {formatAmount(position.usdq)}{" "}
            USDQ
          </p>
          <form
            className="flex flex-col gap-4"
            onSubmit={(event) => {
              event.preventDefault();
              if (!liqParsed) {
                setError("Enter Q to add.");
                return;
              }
              const res = useChain.getState().addLiquidity(liqParsed);
              if (!res.ok) setError(res.error);
              else {
                setError("");
                setLiq("");
                toast(res.summary);
              }
            }}
          >
            <AmountField
              id="liq-amount"
              label="Add Q, matched with USDQ"
              suffix="Q"
              value={liq}
              onChange={setLiq}
              onMax={() => setAmountSafe(setLiq, maxAddQ(chain))}
            />
            <p className="text-sm text-muted tabular-nums">
              Pulls {liqPreview && liqPreview.ok ? formatAmount(liqPreview.usdq) : "—"} USDQ from your seat. Fee{" "}
              {formatAmount(GAS)} Q.
            </p>
            {liqPreview && !liqPreview.ok ? <Notice>{liqPreview.error}</Notice> : null}
            <Button type="submit" variant="ghost" disabled={!chain.hydrated}>
              Add to pool
            </Button>
          </form>
          <div className="flex flex-wrap gap-2">
            <Button
              type="button"
              variant="ghost"
              disabled={!chain.hydrated || position.shares === 0n}
              onClick={() => withdraw(2500, setError)}
            >
              Take 25%
            </Button>
            <Button
              type="button"
              variant="ghost"
              disabled={!chain.hydrated || position.shares === 0n}
              onClick={() => withdraw(5000, setError)}
            >
              Take half
            </Button>
            <Button
              type="button"
              variant="ghost"
              disabled={!chain.hydrated || position.shares === 0n}
              onClick={() => withdraw(10000, setError)}
            >
              Take all
            </Button>
          </div>
        </div>
      </div>
    </Page>
  );
}

function setAmountSafe(set: (value: string) => void, amount: bigint) {
  set(formatInput(amount));
}

function withdraw(bps: number, setError: (value: string) => void) {
  const res = useChain.getState().removeLiquidity(bps);
  if (!res.ok) setError(res.error);
  else {
    setError("");
    toast(res.summary);
  }
}
