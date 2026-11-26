import { useEffect } from "react";
import { Link, Outlet } from "@tanstack/react-router";
import { ArrowLeftRight, Landmark, Layers, ScrollText, Wallet } from "lucide-react";
import { Toaster } from "sonner";
import { bal, spotPrice } from "@/lib/q/engine";
import { useChain } from "@/lib/q/store";
import { CHAIN_ID, label } from "@/lib/q/types";
import { BLOCK_MS, formatInt, formatPct, formatPrice, formatUnits } from "@/lib/q/units";

const LINKS = [
  { to: "/", label: "Mint", icon: Landmark, exact: true },
  { to: "/wallet", label: "Wallet", icon: Wallet, exact: false },
  { to: "/swap", label: "Swap", icon: ArrowLeftRight, exact: false },
  { to: "/ledger", label: "Ledger", icon: ScrollText, exact: false },
  { to: "/stake", label: "Stake", icon: Layers, exact: false },
] as const;

function ChainRuntime() {
  const hydrate = useChain((s) => s.hydrate);
  const tick = useChain((s) => s.tick);
  useEffect(() => {
    hydrate();
    const id = window.setInterval(() => tick(), BLOCK_MS);
    return () => window.clearInterval(id);
  }, [hydrate, tick]);
  return null;
}

function NavLink({
  to,
  label: text,
  icon: Icon,
  exact,
  compact,
}: {
  to: "/" | "/wallet" | "/swap" | "/ledger" | "/stake";
  label: string;
  icon: typeof Landmark;
  exact: boolean;
  compact?: boolean;
}) {
  return (
    <Link
      to={to}
      activeOptions={{ exact }}
      className={
        compact
          ? "flex min-h-14 flex-1 flex-col items-center justify-center gap-1 text-xs"
          : "flex min-h-11 items-center gap-3 rounded-lg px-3 text-sm"
      }
      activeProps={{ className: compact ? "text-paper" : "bg-panel text-paper" }}
      inactiveProps={{ className: "text-faint" }}
    >
      <Icon className="size-4" aria-hidden="true" />
      {text}
    </Link>
  );
}

export function Shell() {
  const chain = useChain();
  const you = bal(chain, "you");
  const price = spotPrice(chain);
  const change = chain.mark ? (price - chain.mark) / chain.mark : 0;
  const tone = change > 0 ? "text-gold" : change < 0 ? "text-copper" : "text-faint";
  const producer = chain.blocks[0] ? label(chain.blocks[0].producer) : "Quorum";

  return (
    <div data-ready={chain.hydrated ? "1" : "0"} className="min-h-dvh bg-ink text-paper">
      <ChainRuntime />
      <div className="md:grid md:grid-cols-[220px_minmax(0,1fr)]">
        <aside className="sticky top-0 hidden h-dvh flex-col border-r border-line px-4 py-6 md:flex">
          <Link to="/" activeOptions={{ exact: true }} className="w-fit">
            <span className="font-serif text-5xl leading-none text-gold">Q</span>
          </Link>
          <p className="mt-3 text-sm text-muted">Settlement chain</p>
          <nav className="mt-8 flex flex-col gap-1">
            {LINKS.map((item) => (
              <NavLink key={item.to} {...item} />
            ))}
          </nav>
          <p className="mt-auto font-mono text-xs text-faint">{CHAIN_ID}</p>
        </aside>
        <div className="min-w-0">
          <header className="sticky top-0 z-10 border-t-2 border-t-gold border-b border-b-line bg-ink">
            <div className="mx-auto flex w-full max-w-5xl flex-wrap items-center justify-between gap-x-5 gap-y-1 px-4 py-3 md:px-8">
              <p className="text-sm">
                <span className="text-faint">Block </span>
                <span className="tabular-nums">{formatInt(chain.height)}</span>
                <span className="text-faint"> · {producer} · </span>
                <span className="text-gold">Live</span>
              </p>
              <p className="text-sm tabular-nums">
                {formatPrice(price)}
                <span className={`ml-2 ${tone}`}>{formatPct(change)}</span>
              </p>
              <p className="text-sm tabular-nums">
                {formatUnits(you.q)} Q
                <span className="hidden text-muted sm:inline"> · {formatUnits(you.usdq)} USDQ</span>
              </p>
            </div>
          </header>
          <div className="mx-auto w-full max-w-5xl px-4 pb-28 md:px-8 md:pb-10">
            <Outlet />
            <p className="pb-2 text-sm text-faint">
              Q runs in this browser. Q and USDQ are this chain's money — not a bank balance, and not a promise of
              dollars.
            </p>
          </div>
        </div>
      </div>
      <nav className="fixed inset-x-0 bottom-0 z-20 flex border-t border-line bg-ink md:hidden">
        {LINKS.map((item) => (
          <NavLink key={item.to} {...item} compact />
        ))}
      </nav>
      <Toaster
        position="top-center"
        offset={12}
        toastOptions={{
          style: {
            background: "var(--color-panel)",
            color: "var(--color-paper)",
            border: "1px solid var(--color-line)",
            fontFamily: "var(--font-sans)",
          },
        }}
      />
    </div>
  );
}
