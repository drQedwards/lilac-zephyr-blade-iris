import { useState } from "react";
import { toast } from "sonner";
import { bal, maxStake, totalStake } from "@/lib/q/engine";
import { useChain } from "@/lib/q/store";
import { VALIDATORS } from "@/lib/q/types";
import { formatAmount, formatInput, formatShare, formatUnits, parseUnits, perMinute } from "@/lib/q/units";
import { AmountField, Button, Notice, Page } from "./ui";

export function StakeView() {
  const chain = useChain();
  const you = bal(chain, "you");
  const staked = BigInt(chain.stake.you ?? "0");
  const network = totalStake(chain);
  const rate = perMinute(staked, network);
  const [amount, setAmount] = useState("");
  const [take, setTake] = useState("");
  const [error, setError] = useState("");
  const seats = [...VALIDATORS.map((v) => ({ id: v.id, name: v.name })), { id: "you", name: "You" }];

  return (
    <Page
      eyebrow="Consensus"
      title="Stake"
      lede="Lock Q on your seat. Every block the treasury pays stake in proportion, and it compounds where it landed."
    >
      <section className="grid gap-6 border-y border-line py-5 sm:grid-cols-3">
        <div>
          <p className="text-sm text-muted">Your stake</p>
          <p className="mt-1 font-serif text-4xl tabular-nums">{formatUnits(staked, 4)}</p>
        </div>
        <div>
          <p className="text-sm text-muted">Q per minute</p>
          <p className="mt-1 font-serif text-4xl tabular-nums">{formatUnits(rate, 4)}</p>
        </div>
        <div>
          <p className="text-sm text-muted">Liquid Q</p>
          <p className="mt-1 font-serif text-4xl tabular-nums">{formatUnits(you.q)}</p>
        </div>
      </section>

      <div className="grid items-start gap-10 lg:grid-cols-2">
        <div className="flex flex-col gap-8">
          <form
            className="flex flex-col gap-4"
            onSubmit={(event) => {
              event.preventDefault();
              const parsed = parseUnits(amount);
              if (!parsed) {
                setError("Enter Q to stake.");
                return;
              }
              const res = useChain.getState().lockStake(parsed);
              if (!res.ok) setError(res.error);
              else {
                setError("");
                setAmount("");
                toast(res.summary);
              }
            }}
          >
            <h2 className="text-2xl">Lock</h2>
            <AmountField
              id="stake-amount"
              label="Stake Q"
              suffix="Q"
              value={amount}
              onChange={setAmount}
              onMax={() => setAmount(formatInput(maxStake(you.q)))}
            />
            <p className="text-sm text-faint">0.05 Q pays the block. Another 0.05 stays liquid so you can leave.</p>
            <Button type="submit" disabled={!chain.hydrated}>
              Stake Q
            </Button>
          </form>
          <form
            className="flex flex-col gap-4"
            onSubmit={(event) => {
              event.preventDefault();
              const parsed = parseUnits(take);
              if (!parsed) {
                setError("Enter Q to unstake.");
                return;
              }
              const res = useChain.getState().releaseStake(parsed);
              if (!res.ok) setError(res.error);
              else {
                setError("");
                setTake("");
                toast(res.summary);
              }
            }}
          >
            <h2 className="text-2xl">Release</h2>
            <AmountField
              id="unstake-amount"
              label="Unstake Q"
              suffix="Q"
              value={take}
              onChange={setTake}
              onMax={() => setTake(formatInput(staked))}
            />
            <Notice>{error}</Notice>
            <Button type="submit" variant="ghost" disabled={!chain.hydrated}>
              Unstake Q
            </Button>
          </form>
        </div>

        <section>
          <h2 className="text-2xl">Seats</h2>
          <p className="mt-2 text-sm text-muted">
            Emission is 2 Q a block, split by stake. Network {formatAmount(network)} Q.
          </p>
          <ul className="mt-4 flex flex-col gap-4">
            {seats.map((seat) => {
              const qty = BigInt(chain.stake[seat.id] ?? "0");
              const pct = network === 0n ? 0 : (Number(qty) / Number(network)) * 100;
              return (
                <li
                  key={seat.id}
                  className={
                    seat.id === "you" ? "border-l-2 border-l-gold pl-3" : "border-l-2 border-l-transparent pl-3"
                  }
                >
                  <div className="flex items-baseline justify-between gap-3">
                    <span>{seat.name}</span>
                    <span className="font-mono text-sm tabular-nums text-muted">
                      {formatAmount(qty)} · {formatShare(pct)}
                    </span>
                  </div>
                  <div className="mt-2 h-1.5 overflow-hidden rounded-full bg-ink-2">
                    <div className="h-full bg-gold" style={{ width: `${Math.min(100, pct)}%` }} />
                  </div>
                </li>
              );
            })}
          </ul>
        </section>
      </div>
    </Page>
  );
}
