import { useEffect, useState, type ButtonHTMLAttributes, type ReactNode } from "react";
import { Area, AreaChart, ResponsiveContainer, YAxis } from "recharts";
import { useNavigate } from "@tanstack/react-router";
import { label } from "@/lib/q/types";
import { useChain } from "@/lib/q/store";
import { formatInt } from "@/lib/q/units";

export function useNow(): number {
  const [now, setNow] = useState(0);
  useEffect(() => {
    setNow(Date.now());
    const id = window.setInterval(() => setNow(Date.now()), 1000);
    return () => window.clearInterval(id);
  }, []);
  return now;
}

export function useMounted(): boolean {
  const [on, setOn] = useState(false);
  useEffect(() => setOn(true), []);
  return on;
}

export function Button({
  variant = "primary",
  className = "",
  ...props
}: ButtonHTMLAttributes<HTMLButtonElement> & { variant?: "primary" | "ghost" }) {
  const look =
    variant === "primary"
      ? "bg-gold text-ink hover:bg-gold-2"
      : "border border-line bg-transparent text-paper hover:border-gold";
  return (
    <button
      className={`inline-flex min-h-11 items-center justify-center gap-2 rounded-lg px-4 text-sm font-medium transition-colors disabled:pointer-events-none disabled:opacity-40 ${look} ${className}`}
      {...props}
    />
  );
}

export function AmountField({
  id,
  label: fieldLabel,
  value,
  onChange,
  onMax,
  suffix,
}: {
  id: string;
  label: string;
  value: string;
  onChange: (value: string) => void;
  onMax?: () => void;
  suffix: string;
}) {
  return (
    <div className="flex flex-col gap-2">
      <label htmlFor={id} className="text-sm text-muted">
        {fieldLabel}
      </label>
      <div className="flex items-center rounded-lg border border-line bg-ink focus-within:border-gold">
        <input
          id={id}
          inputMode="decimal"
          autoComplete="off"
          value={value}
          placeholder="0.00"
          onChange={(event) => onChange(event.target.value)}
          className="min-h-12 w-full bg-transparent px-3 text-lg tabular-nums outline-none"
        />
        <span className="shrink-0 text-sm text-muted">{suffix}</span>
        {onMax ? (
          <button type="button" onClick={onMax} className="min-h-12 px-3 text-sm text-gold">
            Max
          </button>
        ) : null}
      </div>
    </div>
  );
}

export function Notice({ children }: { children: ReactNode }) {
  return (
    <p role="alert" className="min-h-5 text-sm text-copper">
      {children}
    </p>
  );
}

export function Page({
  eyebrow,
  title,
  lede,
  children,
}: {
  eyebrow: string;
  title: string;
  lede: string;
  children: ReactNode;
}) {
  return (
    <div className="flex w-full flex-col gap-8 py-8 md:py-10">
      <header className="flex max-w-xl flex-col gap-2">
        <p className="text-sm text-muted">{eyebrow}</p>
        <h1 className="text-4xl md:text-5xl">{title}</h1>
        <p className="text-muted">{lede}</p>
      </header>
      {children}
    </div>
  );
}

export function PriceChart({ prices, labelText }: { prices: number[]; labelText: string }) {
  const ready = useMounted();
  const data = prices.map((p, i) => ({ i, p }));
  return (
    <div role="img" aria-label={labelText} className="h-44 w-full min-w-0 md:h-56">
      {ready ? (
        <ResponsiveContainer width="100%" height="100%">
          <AreaChart data={data} margin={{ top: 8, right: 4, left: 0, bottom: 0 }}>
            <YAxis
              domain={["auto", "auto"]}
              tick={{ fill: "var(--color-faint)", fontSize: 12 }}
              axisLine={false}
              tickLine={false}
              width={56}
              tickFormatter={(value: number) => value.toFixed(3)}
            />
            <Area
              type="monotone"
              dataKey="p"
              stroke="var(--color-gold)"
              fill="var(--color-gold)"
              fillOpacity={0.16}
              strokeWidth={2}
              dot={false}
              activeDot={false}
              isAnimationActive={false}
            />
          </AreaChart>
        </ResponsiveContainer>
      ) : null}
    </div>
  );
}

export function BlockStrip() {
  const blocks = useChain((s) => s.blocks);
  const setFocus = useChain((s) => s.setFocus);
  const navigate = useNavigate();
  const tip = blocks.slice(0, 7).reverse();
  return (
    <div className="flex gap-2 overflow-x-auto pb-1">
      {tip.map((block, index) => {
        const last = index === tip.length - 1;
        return (
          <button
            key={block.hash}
            type="button"
            onClick={() => {
              setFocus(block.height);
              void navigate({ to: "/ledger" });
            }}
            className={`min-h-16 min-w-24 shrink-0 rounded-lg border px-3 py-2 text-left ${last ? "border-gold" : "border-line"}`}
          >
            <span className="block font-mono text-xs tabular-nums text-faint">{formatInt(block.height)}</span>
            <span className="mt-1 block text-sm text-paper">{label(block.producer)}</span>
            <span className="block text-xs text-muted">{block.txs.length === 1 ? "1 tx" : `${block.txs.length} tx`}</span>
          </button>
        );
      })}
    </div>
  );
}
