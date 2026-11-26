import { i as __toESM } from "../_runtime.mjs";
import { C as require_jsx_runtime, Y as require_react } from "../_libs/@tanstack/react-router+[...].mjs";
import { A as useChain, C as previewSwap, E as spotPrice, S as previewAdd, _ as lpPosition, b as parseUnits, f as formatPct, h as formatUnits, i as GAS, l as formatAmount, m as formatShare, p as formatPrice, s as bal, u as formatInput, v as maxAddQ } from "./store-DXz1-2hr.mjs";
import { a as Page, i as Notice, r as Button, t as AmountField } from "./ui-B1NIJINu.mjs";
import { n as toast } from "../_libs/sonner.mjs";
//#region node_modules/.nitro/vite/services/ssr/assets/swap-CRoKjzZ_.js
var import_react = /* @__PURE__ */ __toESM(require_react());
var import_jsx_runtime = require_jsx_runtime();
function SwapView() {
	const chain = useChain();
	const [pay, setPay] = (0, import_react.useState)("q");
	const [amount, setAmount] = (0, import_react.useState)("");
	const [liq, setLiq] = (0, import_react.useState)("");
	const [error, setError] = (0, import_react.useState)("");
	const you = bal(chain, "you");
	const parsed = parseUnits(amount);
	const preview = parsed && parsed > 0n ? previewSwap(chain, pay, parsed) : null;
	const liqParsed = parseUnits(liq);
	const liqPreview = liqParsed && liqParsed > 0n ? previewAdd(chain, liqParsed) : null;
	const position = lpPosition(chain);
	const price = spotPrice(chain);
	const maxPay = pay === "q" ? you.q > 50000n ? you.q - GAS : 0n : you.usdq;
	return /* @__PURE__ */ (0, import_jsx_runtime.jsx)(Page, {
		eyebrow: "Exchange",
		title: "Swap",
		lede: "Trade against the pool. Liquidity you add earns the 0.30% fee the pool keeps on every swap.",
		children: /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", {
			className: "grid items-start gap-10 lg:grid-cols-2",
			children: [/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("form", {
				className: "flex flex-col gap-4",
				onSubmit: (event) => {
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
				},
				children: [
					/* @__PURE__ */ (0, import_jsx_runtime.jsx)("h2", {
						className: "text-2xl",
						children: "Trade"
					}),
					/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", {
						className: "grid grid-cols-2 gap-1 rounded-xl bg-ink-2 p-1",
						children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("button", {
							type: "button",
							onClick: () => setPay("q"),
							className: `min-h-11 rounded-lg text-sm ${pay === "q" ? "bg-panel text-paper" : "text-muted"}`,
							children: "Pay Q"
						}), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("button", {
							type: "button",
							onClick: () => setPay("usdq"),
							className: `min-h-11 rounded-lg text-sm ${pay === "usdq" ? "bg-panel text-paper" : "text-muted"}`,
							children: "Pay USDQ"
						})]
					}),
					/* @__PURE__ */ (0, import_jsx_runtime.jsx)(AmountField, {
						id: "swap-amount",
						label: pay === "q" ? "You pay Q" : "You pay USDQ",
						suffix: pay === "q" ? "Q" : "USDQ",
						value: amount,
						onChange: setAmount,
						onMax: () => setAmount(formatInput(maxPay))
					}),
					/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", {
						className: "flex flex-col gap-1 text-sm text-muted",
						children: [
							/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("p", {
								className: "tabular-nums",
								children: [
									"You receive",
									" ",
									/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("span", {
										className: "text-paper",
										children: [
											preview && preview.ok ? formatUnits(preview.amountOut) : "—",
											" ",
											pay === "q" ? "USDQ" : "Q"
										]
									})
								]
							}),
							/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("p", {
								className: "tabular-nums",
								children: [
									"Pool price ",
									formatPrice(price),
									" · impact",
									" ",
									preview && preview.ok ? formatPct(Math.abs(preview.impact)).replace("+", "") : "—",
									" · fee",
									" ",
									formatAmount(GAS),
									" Q"
								]
							}),
							/* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", { children: "Desks lean the price back toward 4. Your quote is sealed when you submit." })
						]
					}),
					preview && !preview.ok ? /* @__PURE__ */ (0, import_jsx_runtime.jsx)(Notice, { children: preview.error }) : /* @__PURE__ */ (0, import_jsx_runtime.jsx)(Notice, { children: error }),
					/* @__PURE__ */ (0, import_jsx_runtime.jsx)(Button, {
						type: "submit",
						disabled: !chain.hydrated,
						children: pay === "q" ? "Swap into USDQ" : "Swap into Q"
					})
				]
			}), /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", {
				className: "flex flex-col gap-4",
				children: [
					/* @__PURE__ */ (0, import_jsx_runtime.jsx)("h2", {
						className: "text-2xl",
						children: "Pool"
					}),
					/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("dl", {
						className: "grid grid-cols-2 gap-4 border-y border-line py-4",
						children: [/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", { children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("dt", {
							className: "text-sm text-muted",
							children: "Q reserve"
						}), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("dd", {
							className: "mt-1 font-serif text-2xl tabular-nums",
							children: formatAmount(BigInt(chain.poolQ))
						})] }), /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", { children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("dt", {
							className: "text-sm text-muted",
							children: "USDQ reserve"
						}), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("dd", {
							className: "mt-1 font-serif text-2xl tabular-nums",
							children: formatAmount(BigInt(chain.poolUsdq))
						})] })]
					}),
					/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("p", {
						className: "text-sm text-muted",
						children: [
							"Your position ",
							formatShare(position.pct),
							" · ",
							formatAmount(position.q),
							" Q and ",
							formatAmount(position.usdq),
							" ",
							"USDQ"
						]
					}),
					/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("form", {
						className: "flex flex-col gap-4",
						onSubmit: (event) => {
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
						},
						children: [
							/* @__PURE__ */ (0, import_jsx_runtime.jsx)(AmountField, {
								id: "liq-amount",
								label: "Add Q, matched with USDQ",
								suffix: "Q",
								value: liq,
								onChange: setLiq,
								onMax: () => setAmountSafe(setLiq, maxAddQ(chain))
							}),
							/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("p", {
								className: "text-sm text-muted tabular-nums",
								children: [
									"Pulls ",
									liqPreview && liqPreview.ok ? formatAmount(liqPreview.usdq) : "—",
									" USDQ from your seat. Fee",
									" ",
									formatAmount(GAS),
									" Q."
								]
							}),
							liqPreview && !liqPreview.ok ? /* @__PURE__ */ (0, import_jsx_runtime.jsx)(Notice, { children: liqPreview.error }) : null,
							/* @__PURE__ */ (0, import_jsx_runtime.jsx)(Button, {
								type: "submit",
								variant: "ghost",
								disabled: !chain.hydrated,
								children: "Add to pool"
							})
						]
					}),
					/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", {
						className: "flex flex-wrap gap-2",
						children: [
							/* @__PURE__ */ (0, import_jsx_runtime.jsx)(Button, {
								type: "button",
								variant: "ghost",
								disabled: !chain.hydrated || position.shares === 0n,
								onClick: () => withdraw(2500, setError),
								children: "Take 25%"
							}),
							/* @__PURE__ */ (0, import_jsx_runtime.jsx)(Button, {
								type: "button",
								variant: "ghost",
								disabled: !chain.hydrated || position.shares === 0n,
								onClick: () => withdraw(5e3, setError),
								children: "Take half"
							}),
							/* @__PURE__ */ (0, import_jsx_runtime.jsx)(Button, {
								type: "button",
								variant: "ghost",
								disabled: !chain.hydrated || position.shares === 0n,
								onClick: () => withdraw(1e4, setError),
								children: "Take all"
							})
						]
					})
				]
			})]
		})
	});
}
function setAmountSafe(set, amount) {
	set(formatInput(amount));
}
function withdraw(bps, setError) {
	const res = useChain.getState().removeLiquidity(bps);
	if (!res.ok) setError(res.error);
	else {
		setError("");
		toast(res.summary);
	}
}
var SplitComponent = SwapView;
//#endregion
export { SplitComponent as component };
