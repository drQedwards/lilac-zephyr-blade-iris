import { i as __toESM } from "../_runtime.mjs";
import { C as require_jsx_runtime, Y as require_react } from "../_libs/@tanstack/react-router+[...].mjs";
import { A as useChain, O as totalStake, a as VALIDATORS, b as parseUnits, h as formatUnits, l as formatAmount, m as formatShare, s as bal, u as formatInput, x as perMinute, y as maxStake } from "./store-DXz1-2hr.mjs";
import { a as Page, i as Notice, r as Button, t as AmountField } from "./ui-B1NIJINu.mjs";
import { n as toast } from "../_libs/sonner.mjs";
//#region node_modules/.nitro/vite/services/ssr/assets/stake-Z-JnWO3R.js
var import_react = /* @__PURE__ */ __toESM(require_react());
var import_jsx_runtime = require_jsx_runtime();
function StakeView() {
	const chain = useChain();
	const you = bal(chain, "you");
	const staked = BigInt(chain.stake.you ?? "0");
	const network = totalStake(chain);
	const rate = perMinute(staked, network);
	const [amount, setAmount] = (0, import_react.useState)("");
	const [take, setTake] = (0, import_react.useState)("");
	const [error, setError] = (0, import_react.useState)("");
	const seats = [...VALIDATORS.map((v) => ({
		id: v.id,
		name: v.name
	})), {
		id: "you",
		name: "You"
	}];
	return /* @__PURE__ */ (0, import_jsx_runtime.jsxs)(Page, {
		eyebrow: "Consensus",
		title: "Stake",
		lede: "Lock Q on your seat. Every block the treasury pays stake in proportion, and it compounds where it landed.",
		children: [/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("section", {
			className: "grid gap-6 border-y border-line py-5 sm:grid-cols-3",
			children: [
				/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", { children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
					className: "text-sm text-muted",
					children: "Your stake"
				}), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
					className: "mt-1 font-serif text-4xl tabular-nums",
					children: formatUnits(staked, 4)
				})] }),
				/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", { children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
					className: "text-sm text-muted",
					children: "Q per minute"
				}), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
					className: "mt-1 font-serif text-4xl tabular-nums",
					children: formatUnits(rate, 4)
				})] }),
				/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", { children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
					className: "text-sm text-muted",
					children: "Liquid Q"
				}), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
					className: "mt-1 font-serif text-4xl tabular-nums",
					children: formatUnits(you.q)
				})] })
			]
		}), /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", {
			className: "grid items-start gap-10 lg:grid-cols-2",
			children: [/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", {
				className: "flex flex-col gap-8",
				children: [/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("form", {
					className: "flex flex-col gap-4",
					onSubmit: (event) => {
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
					},
					children: [
						/* @__PURE__ */ (0, import_jsx_runtime.jsx)("h2", {
							className: "text-2xl",
							children: "Lock"
						}),
						/* @__PURE__ */ (0, import_jsx_runtime.jsx)(AmountField, {
							id: "stake-amount",
							label: "Stake Q",
							suffix: "Q",
							value: amount,
							onChange: setAmount,
							onMax: () => setAmount(formatInput(maxStake(you.q)))
						}),
						/* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
							className: "text-sm text-faint",
							children: "0.05 Q pays the block. Another 0.05 stays liquid so you can leave."
						}),
						/* @__PURE__ */ (0, import_jsx_runtime.jsx)(Button, {
							type: "submit",
							disabled: !chain.hydrated,
							children: "Stake Q"
						})
					]
				}), /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("form", {
					className: "flex flex-col gap-4",
					onSubmit: (event) => {
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
					},
					children: [
						/* @__PURE__ */ (0, import_jsx_runtime.jsx)("h2", {
							className: "text-2xl",
							children: "Release"
						}),
						/* @__PURE__ */ (0, import_jsx_runtime.jsx)(AmountField, {
							id: "unstake-amount",
							label: "Unstake Q",
							suffix: "Q",
							value: take,
							onChange: setTake,
							onMax: () => setTake(formatInput(staked))
						}),
						/* @__PURE__ */ (0, import_jsx_runtime.jsx)(Notice, { children: error }),
						/* @__PURE__ */ (0, import_jsx_runtime.jsx)(Button, {
							type: "submit",
							variant: "ghost",
							disabled: !chain.hydrated,
							children: "Unstake Q"
						})
					]
				})]
			}), /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("section", { children: [
				/* @__PURE__ */ (0, import_jsx_runtime.jsx)("h2", {
					className: "text-2xl",
					children: "Seats"
				}),
				/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("p", {
					className: "mt-2 text-sm text-muted",
					children: [
						"Emission is 2 Q a block, split by stake. Network ",
						formatAmount(network),
						" Q."
					]
				}),
				/* @__PURE__ */ (0, import_jsx_runtime.jsx)("ul", {
					className: "mt-4 flex flex-col gap-4",
					children: seats.map((seat) => {
						const qty = BigInt(chain.stake[seat.id] ?? "0");
						const pct = network === 0n ? 0 : Number(qty) / Number(network) * 100;
						return /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("li", {
							className: seat.id === "you" ? "border-l-2 border-l-gold pl-3" : "border-l-2 border-l-transparent pl-3",
							children: [/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", {
								className: "flex items-baseline justify-between gap-3",
								children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("span", { children: seat.name }), /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("span", {
									className: "font-mono text-sm tabular-nums text-muted",
									children: [
										formatAmount(qty),
										" · ",
										formatShare(pct)
									]
								})]
							}), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("div", {
								className: "mt-2 h-1.5 overflow-hidden rounded-full bg-ink-2",
								children: /* @__PURE__ */ (0, import_jsx_runtime.jsx)("div", {
									className: "h-full bg-gold",
									style: { width: `${Math.min(100, pct)}%` }
								})
							})]
						}, seat.id);
					})
				})
			] })]
		})]
	});
}
var SplitComponent = StakeView;
//#endregion
export { SplitComponent as component };
