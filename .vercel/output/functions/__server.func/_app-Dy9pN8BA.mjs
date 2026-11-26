import { i as __toESM } from "./_runtime.mjs";
import { C as require_jsx_runtime, Y as require_react, b as Link, g as Outlet } from "./_libs/@tanstack/react-router+[...].mjs";
import { A as useChain, E as spotPrice, d as formatInt, f as formatPct, g as label, h as formatUnits, p as formatPrice, s as bal, t as BLOCK_MS } from "./_ssr/store-DXz1-2hr.mjs";
import { a as Landmark, i as Layers, r as ScrollText, s as ArrowLeftRight, t as Wallet } from "./_libs/lucide-react.mjs";
import { t as Toaster } from "./_libs/sonner.mjs";
//#region node_modules/.nitro/vite/services/ssr/assets/_app-Dy9pN8BA.js
var import_react = /* @__PURE__ */ __toESM(require_react());
var import_jsx_runtime = require_jsx_runtime();
var LINKS = [
	{
		to: "/",
		label: "Mint",
		icon: Landmark,
		exact: true
	},
	{
		to: "/wallet",
		label: "Wallet",
		icon: Wallet,
		exact: false
	},
	{
		to: "/swap",
		label: "Swap",
		icon: ArrowLeftRight,
		exact: false
	},
	{
		to: "/ledger",
		label: "Ledger",
		icon: ScrollText,
		exact: false
	},
	{
		to: "/stake",
		label: "Stake",
		icon: Layers,
		exact: false
	}
];
function ChainRuntime() {
	const hydrate = useChain((s) => s.hydrate);
	const tick = useChain((s) => s.tick);
	(0, import_react.useEffect)(() => {
		hydrate();
		const id = window.setInterval(() => tick(), BLOCK_MS);
		return () => window.clearInterval(id);
	}, [hydrate, tick]);
	return null;
}
function NavLink({ to, label: text, icon: Icon, exact, compact }) {
	return /* @__PURE__ */ (0, import_jsx_runtime.jsxs)(Link, {
		to,
		activeOptions: { exact },
		className: compact ? "flex min-h-14 flex-1 flex-col items-center justify-center gap-1 text-xs" : "flex min-h-11 items-center gap-3 rounded-lg px-3 text-sm",
		activeProps: { className: compact ? "text-paper" : "bg-panel text-paper" },
		inactiveProps: { className: "text-faint" },
		children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)(Icon, {
			className: "size-4",
			"aria-hidden": "true"
		}), text]
	});
}
function Shell() {
	const chain = useChain();
	const you = bal(chain, "you");
	const price = spotPrice(chain);
	const change = chain.mark ? (price - chain.mark) / chain.mark : 0;
	const tone = change > 0 ? "text-gold" : change < 0 ? "text-copper" : "text-faint";
	const producer = chain.blocks[0] ? label(chain.blocks[0].producer) : "Quorum";
	return /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", {
		"data-ready": chain.hydrated ? "1" : "0",
		className: "min-h-dvh bg-ink text-paper",
		children: [
			/* @__PURE__ */ (0, import_jsx_runtime.jsx)(ChainRuntime, {}),
			/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", {
				className: "md:grid md:grid-cols-[220px_minmax(0,1fr)]",
				children: [/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("aside", {
					className: "sticky top-0 hidden h-dvh flex-col border-r border-line px-4 py-6 md:flex",
					children: [
						/* @__PURE__ */ (0, import_jsx_runtime.jsx)(Link, {
							to: "/",
							activeOptions: { exact: true },
							className: "w-fit",
							children: /* @__PURE__ */ (0, import_jsx_runtime.jsx)("span", {
								className: "font-serif text-5xl leading-none text-gold",
								children: "Q"
							})
						}),
						/* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
							className: "mt-3 text-sm text-muted",
							children: "Settlement chain"
						}),
						/* @__PURE__ */ (0, import_jsx_runtime.jsx)("nav", {
							className: "mt-8 flex flex-col gap-1",
							children: LINKS.map((item) => /* @__PURE__ */ (0, import_jsx_runtime.jsx)(NavLink, { ...item }, item.to))
						}),
						/* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
							className: "mt-auto font-mono text-xs text-faint",
							children: "q-1"
						})
					]
				}), /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", {
					className: "min-w-0",
					children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("header", {
						className: "sticky top-0 z-10 border-t-2 border-t-gold border-b border-b-line bg-ink",
						children: /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", {
							className: "mx-auto flex w-full max-w-5xl flex-wrap items-center justify-between gap-x-5 gap-y-1 px-4 py-3 md:px-8",
							children: [
								/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("p", {
									className: "text-sm",
									children: [
										/* @__PURE__ */ (0, import_jsx_runtime.jsx)("span", {
											className: "text-faint",
											children: "Block "
										}),
										/* @__PURE__ */ (0, import_jsx_runtime.jsx)("span", {
											className: "tabular-nums",
											children: formatInt(chain.height)
										}),
										/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("span", {
											className: "text-faint",
											children: [
												" · ",
												producer,
												" · "
											]
										}),
										/* @__PURE__ */ (0, import_jsx_runtime.jsx)("span", {
											className: "text-gold",
											children: "Live"
										})
									]
								}),
								/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("p", {
									className: "text-sm tabular-nums",
									children: [formatPrice(price), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("span", {
										className: `ml-2 ${tone}`,
										children: formatPct(change)
									})]
								}),
								/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("p", {
									className: "text-sm tabular-nums",
									children: [
										formatUnits(you.q),
										" Q",
										/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("span", {
											className: "hidden text-muted sm:inline",
											children: [
												" · ",
												formatUnits(you.usdq),
												" USDQ"
											]
										})
									]
								})
							]
						})
					}), /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", {
						className: "mx-auto w-full max-w-5xl px-4 pb-28 md:px-8 md:pb-10",
						children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)(Outlet, {}), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
							className: "pb-2 text-sm text-faint",
							children: "Q runs in this browser. Q and USDQ are this chain's money — not a bank balance, and not a promise of dollars."
						})]
					})]
				})]
			}),
			/* @__PURE__ */ (0, import_jsx_runtime.jsx)("nav", {
				className: "fixed inset-x-0 bottom-0 z-20 flex border-t border-line bg-ink md:hidden",
				children: LINKS.map((item) => /* @__PURE__ */ (0, import_jsx_runtime.jsx)(NavLink, {
					...item,
					compact: true
				}, item.to))
			}),
			/* @__PURE__ */ (0, import_jsx_runtime.jsx)(Toaster, {
				position: "top-center",
				offset: 12,
				toastOptions: { style: {
					background: "var(--color-panel)",
					color: "var(--color-paper)",
					border: "1px solid var(--color-line)",
					fontFamily: "var(--font-sans)"
				} }
			})
		]
	});
}
var SplitComponent = Shell;
//#endregion
export { SplitComponent as component };
