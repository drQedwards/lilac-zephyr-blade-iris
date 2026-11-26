import { C as require_jsx_runtime } from "../_libs/@tanstack/react-router+[...].mjs";
import { A as useChain, T as relTime, d as formatInt, g as label, l as formatAmount } from "./store-DXz1-2hr.mjs";
import { a as Page, s as useNow } from "./ui-B1NIJINu.mjs";
//#region node_modules/.nitro/vite/services/ssr/assets/ledger-CdUhlAVI.js
var import_jsx_runtime = require_jsx_runtime();
function LedgerView() {
	const chain = useChain();
	const now = useNow();
	const setFocus = useChain((s) => s.setFocus);
	const block = chain.blocks.find((item) => item.height === chain.focus) ?? chain.blocks[0];
	return /* @__PURE__ */ (0, import_jsx_runtime.jsx)(Page, {
		eyebrow: "Explorer",
		title: "Ledger",
		lede: "Every sealed block still held in this browser, newest first.",
		children: block ? /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", {
			className: "grid items-start gap-8 lg:grid-cols-[minmax(0,1fr)_260px]",
			children: [/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("article", {
				className: "flex flex-col gap-4",
				children: [
					/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("header", { children: [/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("h2", {
						className: "text-3xl tabular-nums",
						children: ["Block ", formatInt(block.height)]
					}), /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("p", {
						className: "mt-2 text-muted",
						children: [
							label(block.producer),
							" sealed it",
							block.time === 0 ? " before you arrived" : "",
							".",
							" ",
							relTime(block.time, now),
							"."
						]
					})] }),
					/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("dl", {
						className: "grid gap-3 text-sm sm:grid-cols-2",
						children: [
							/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", { children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("dt", {
								className: "text-faint",
								children: "Hash"
							}), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("dd", {
								className: "mt-1 font-mono break-all text-paper",
								children: block.hash
							})] }),
							/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", { children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("dt", {
								className: "text-faint",
								children: "Parent"
							}), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("dd", {
								className: "mt-1 font-mono break-all",
								children: block.parent
							})] }),
							/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", { children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("dt", {
								className: "text-faint",
								children: "Emission to stake"
							}), /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("dd", {
								className: "mt-1 tabular-nums",
								children: [formatAmount(BigInt(block.emission)), " Q"]
							})] }),
							/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", { children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("dt", {
								className: "text-faint",
								children: "Fees to producer"
							}), /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("dd", {
								className: "mt-1 tabular-nums",
								children: [formatAmount(BigInt(block.fees)), " Q"]
							})] })
						]
					}),
					/* @__PURE__ */ (0, import_jsx_runtime.jsx)("ul", { children: block.txs.length === 0 ? /* @__PURE__ */ (0, import_jsx_runtime.jsx)("li", {
						className: "border-t border-line py-3 text-muted",
						children: "No transfers. Stake was still paid."
					}) : block.txs.map((tx) => /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("li", {
						className: "border-t border-line py-3",
						children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", { children: tx.summary }), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
							className: "mt-1 font-mono text-xs text-faint",
							children: tx.hash
						})]
					}, tx.hash)) })
				]
			}), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("div", {
				className: "lg:max-h-[32rem] lg:overflow-y-auto",
				children: chain.blocks.map((item) => {
					const active = item.height === block.height;
					return /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("button", {
						type: "button",
						onClick: () => setFocus(item.height),
						className: `flex min-h-11 w-full items-baseline justify-between gap-3 border-b border-line py-3 text-left ${active ? "text-paper" : "text-muted"}`,
						children: [
							/* @__PURE__ */ (0, import_jsx_runtime.jsx)("span", {
								className: "font-mono text-sm tabular-nums",
								children: formatInt(item.height)
							}),
							/* @__PURE__ */ (0, import_jsx_runtime.jsx)("span", {
								className: "flex-1 truncate text-sm",
								children: label(item.producer)
							}),
							/* @__PURE__ */ (0, import_jsx_runtime.jsx)("span", {
								className: "text-sm tabular-nums",
								children: item.txs.length
							})
						]
					}, item.hash);
				})
			})]
		}) : /* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
			className: "text-muted",
			children: "No blocks yet."
		})
	});
}
var SplitComponent = LedgerView;
//#endregion
export { SplitComponent as component };
