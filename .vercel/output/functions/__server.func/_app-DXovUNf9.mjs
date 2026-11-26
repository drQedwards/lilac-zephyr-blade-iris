import { C as require_jsx_runtime } from "./_libs/@tanstack/react-router+[...].mjs";
import { A as useChain, D as totalQ, E as spotPrice, O as totalStake, T as relTime, c as balanceRows, f as formatPct, k as totalUsdq, l as formatAmount, p as formatPrice, w as recentTxs } from "./_ssr/store-DXz1-2hr.mjs";
import { n as BlockStrip, o as PriceChart, s as useNow } from "./_ssr/ui-B1NIJINu.mjs";
//#region node_modules/.nitro/vite/services/ssr/assets/_app-DXovUNf9.js
var import_jsx_runtime = require_jsx_runtime();
function MintView() {
	const chain = useChain();
	const now = useNow();
	const price = spotPrice(chain);
	const change = chain.mark ? (price - chain.mark) / chain.mark : 0;
	const tone = change > 0 ? "text-gold" : change < 0 ? "text-copper" : "text-faint";
	const rows = balanceRows(chain);
	const txs = recentTxs(chain, 6);
	return /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", {
		className: "flex w-full flex-col gap-8 py-8 md:gap-10 md:py-10",
		children: [
			/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("header", {
				className: "flex flex-col gap-3",
				children: [
					/* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
						className: "text-sm text-muted",
						children: "Spot · 1 Q"
					}),
					/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("h1", {
						className: "text-6xl tabular-nums md:text-8xl",
						children: [formatPrice(price), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("span", {
							className: "ml-3 font-sans text-lg font-normal text-muted md:text-2xl",
							children: "USDQ"
						})]
					}),
					/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("p", {
						className: `text-sm tabular-nums ${tone}`,
						children: [formatPct(change), " since you arrived"]
					}),
					/* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
						className: "max-w-xl text-muted",
						children: "The pool sets the price. Harbor, North Desk, and Lumen trade toward 4 USDQ, and a block seals every few seconds."
					})
				]
			}),
			/* @__PURE__ */ (0, import_jsx_runtime.jsx)(BlockStrip, {}),
			/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("dl", {
				className: "grid grid-cols-2 gap-x-6 gap-y-5 border-y border-line py-5 md:grid-cols-4",
				children: [
					/* @__PURE__ */ (0, import_jsx_runtime.jsx)(Stat, {
						label: "Q outstanding",
						value: formatAmount(totalQ(chain))
					}),
					/* @__PURE__ */ (0, import_jsx_runtime.jsx)(Stat, {
						label: "USDQ issued",
						value: formatAmount(totalUsdq(chain))
					}),
					/* @__PURE__ */ (0, import_jsx_runtime.jsx)(Stat, {
						label: "Q in the pool",
						value: formatAmount(BigInt(chain.poolQ))
					}),
					/* @__PURE__ */ (0, import_jsx_runtime.jsx)(Stat, {
						label: "Q staked",
						value: formatAmount(totalStake(chain))
					})
				]
			}),
			/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("section", {
				className: "flex flex-col gap-3",
				children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("h2", {
					className: "text-2xl",
					children: "Tape"
				}), /* @__PURE__ */ (0, import_jsx_runtime.jsx)(PriceChart, {
					prices: chain.prices,
					labelText: `Q price tape, last print ${formatPrice(price)} USDQ`
				})]
			}),
			/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("section", {
				className: "grid gap-8 lg:grid-cols-2",
				children: [/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", { children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("h2", {
					className: "text-2xl",
					children: "Where Q sits"
				}), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("ul", {
					className: "mt-3",
					children: rows.map((row) => /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("li", {
						className: "flex items-baseline justify-between gap-4 border-b border-line py-3",
						children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("span", { children: row.name }), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("span", {
							className: "font-mono text-sm tabular-nums text-muted",
							children: formatAmount(row.q)
						})]
					}, row.id))
				})] }), /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", { children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("h2", {
					className: "text-2xl",
					children: "Latest settlement"
				}), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("ul", {
					className: "mt-3",
					children: txs.length === 0 ? /* @__PURE__ */ (0, import_jsx_runtime.jsx)("li", {
						className: "border-b border-line py-3 text-muted",
						children: "The chain is quiet."
					}) : txs.map((tx) => /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("li", {
						className: "flex items-baseline justify-between gap-4 border-b border-line py-3",
						children: [/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("span", { children: [tx.summary, /* @__PURE__ */ (0, import_jsx_runtime.jsx)("span", {
							className: "mt-1 block text-xs text-faint",
							children: relTime(tx.time, now)
						})] }), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("span", {
							className: "shrink-0 font-mono text-xs text-faint",
							title: tx.hash,
							children: tx.hash.slice(0, 8)
						})]
					}, tx.hash))
				})] })]
			})
		]
	});
}
function Stat({ label, value }) {
	return /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", { children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("dt", {
		className: "text-sm text-muted",
		children: label
	}), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("dd", {
		className: "mt-1 font-serif text-2xl tabular-nums",
		children: value
	})] });
}
var SplitComponent = MintView;
//#endregion
export { SplitComponent as component };
