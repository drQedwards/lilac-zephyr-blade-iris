import { i as __toESM } from "../_runtime.mjs";
import { C as require_jsx_runtime, Y as require_react } from "../_libs/@tanstack/react-router+[...].mjs";
import { A as useChain, T as relTime, b as parseUnits, h as formatUnits, i as GAS, l as formatAmount, n as DESKS, o as YOU_ADDRESS, r as DRIP_COOL_MS, s as bal, u as formatInput } from "./store-DXz1-2hr.mjs";
import { a as Page, i as Notice, r as Button, s as useNow, t as AmountField } from "./ui-B1NIJINu.mjs";
import { o as Copy } from "../_libs/lucide-react.mjs";
import { n as toast } from "../_libs/sonner.mjs";
//#region node_modules/.nitro/vite/services/ssr/assets/wallet-CY8qGRxJ.js
var import_react = /* @__PURE__ */ __toESM(require_react());
var import_jsx_runtime = require_jsx_runtime();
function WalletView() {
	const chain = useChain();
	const now = useNow();
	const you = bal(chain, "you");
	const [to, setTo] = (0, import_react.useState)("harbor");
	const [custom, setCustom] = (0, import_react.useState)("");
	const [amount, setAmount] = (0, import_react.useState)("");
	const [error, setError] = (0, import_react.useState)("");
	const [armed, setArmed] = (0, import_react.useState)(false);
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
	return /* @__PURE__ */ (0, import_jsx_runtime.jsxs)(Page, {
		eyebrow: "Wallet",
		title: "Your seat",
		lede: "Send Q to a desk or any q1 address. The treasury will also drip new money, about once a minute.",
		children: [
			/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("section", {
				className: "grid gap-6 border-y border-line py-5 sm:grid-cols-2",
				children: [/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", { children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
					className: "text-sm text-muted",
					children: "Q"
				}), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
					className: "mt-1 font-serif text-4xl tabular-nums",
					children: formatUnits(you.q)
				})] }), /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", { children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
					className: "text-sm text-muted",
					children: "USDQ"
				}), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
					className: "mt-1 font-serif text-4xl tabular-nums",
					children: formatUnits(you.usdq)
				})] })]
			}),
			/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("section", {
				className: "flex flex-col gap-2",
				children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
					className: "text-sm text-muted",
					children: "Address"
				}), /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", {
					className: "flex flex-wrap items-center gap-3",
					children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
						className: "font-mono text-sm break-all",
						children: YOU_ADDRESS
					}), /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("button", {
						type: "button",
						className: "inline-flex min-h-11 items-center gap-2 text-sm text-gold",
						onClick: () => {
							navigator.clipboard?.writeText(YOU_ADDRESS).then(() => toast("Address copied"), () => toast(YOU_ADDRESS));
						},
						children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)(Copy, {
							className: "size-4",
							"aria-hidden": "true"
						}), "Copy"]
					})]
				})]
			}),
			/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("form", {
				className: "flex max-w-md flex-col gap-4",
				onSubmit: (event) => {
					event.preventDefault();
					send();
				},
				children: [
					/* @__PURE__ */ (0, import_jsx_runtime.jsx)("h2", {
						className: "text-2xl",
						children: "Send"
					}),
					/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", {
						className: "flex flex-wrap gap-2",
						children: [DESKS.map((desk) => /* @__PURE__ */ (0, import_jsx_runtime.jsx)("button", {
							type: "button",
							onClick: () => setTo(desk.id),
							className: `min-h-11 rounded-full border px-4 text-sm ${to === desk.id ? "border-gold text-paper" : "border-line text-muted"}`,
							children: desk.name
						}, desk.id)), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("button", {
							type: "button",
							onClick: () => setTo("custom"),
							className: `min-h-11 rounded-full border px-4 text-sm ${to === "custom" ? "border-gold text-paper" : "border-line text-muted"}`,
							children: "Address"
						})]
					}),
					to === "custom" ? /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", {
						className: "flex flex-col gap-2",
						children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("label", {
							htmlFor: "addr",
							className: "text-sm text-muted",
							children: "Recipient address"
						}), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("input", {
							id: "addr",
							value: custom,
							autoComplete: "off",
							spellCheck: false,
							onChange: (event) => setCustom(event.target.value.trim()),
							placeholder: "q1........",
							className: "min-h-12 rounded-lg border border-line bg-ink px-3 font-mono text-sm outline-none focus:border-gold"
						})]
					}) : null,
					/* @__PURE__ */ (0, import_jsx_runtime.jsx)(AmountField, {
						id: "send-amount",
						label: "Amount",
						suffix: "Q",
						value: amount,
						onChange: setAmount,
						onMax: () => setAmount(formatInput(you.q > 50000n ? you.q - GAS : 0n))
					}),
					/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("p", {
						className: "text-sm text-faint",
						children: [
							"Fee ",
							formatAmount(GAS),
							" Q, paid to whoever seals the block."
						]
					}),
					/* @__PURE__ */ (0, import_jsx_runtime.jsx)(Notice, { children: error }),
					/* @__PURE__ */ (0, import_jsx_runtime.jsx)(Button, {
						type: "submit",
						disabled: !chain.hydrated,
						children: "Send Q"
					})
				]
			}),
			/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("section", {
				className: "flex max-w-md flex-col gap-3 border-t border-line pt-6",
				children: [
					/* @__PURE__ */ (0, import_jsx_runtime.jsx)("h2", {
						className: "text-2xl",
						children: "Drip"
					}),
					/* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
						className: "text-muted",
						children: "50 Q from the treasury, and 200 newly minted USDQ."
					}),
					/* @__PURE__ */ (0, import_jsx_runtime.jsx)(Button, {
						type: "button",
						variant: "ghost",
						disabled: !chain.hydrated || cool > 0,
						onClick: () => {
							const res = useChain.getState().drip();
							if (!res.ok) setError(res.error);
							else {
								setError("");
								toast(res.summary);
							}
						},
						children: cool > 0 ? `Drip in ${Math.ceil(cool / 1e3)}s` : "Take a drip"
					})
				]
			}),
			/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("section", { children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("h2", {
				className: "text-2xl",
				children: "Your ledger"
			}), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("ul", {
				className: "mt-3",
				children: chain.mine.length === 0 ? /* @__PURE__ */ (0, import_jsx_runtime.jsx)("li", {
					className: "border-b border-line py-3 text-muted",
					children: "Nothing with your name on it yet."
				}) : chain.mine.map((tx) => /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("li", {
					className: "flex items-baseline justify-between gap-4 border-b border-line py-3",
					children: [/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("span", { children: [tx.summary, /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("span", {
						className: "mt-1 block text-xs text-faint",
						children: [
							"Block ",
							tx.block || "—",
							" · ",
							relTime(tx.time, now)
						]
					})] }), /* @__PURE__ */ (0, import_jsx_runtime.jsx)("span", {
						className: "shrink-0 font-mono text-xs text-faint",
						children: tx.hash.slice(0, 8)
					})]
				}, tx.hash))
			})] }),
			/* @__PURE__ */ (0, import_jsx_runtime.jsx)("section", {
				className: "flex flex-col items-start gap-3",
				children: armed ? /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", {
					className: "flex flex-wrap gap-2",
					children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)(Button, {
						type: "button",
						variant: "ghost",
						onClick: () => {
							useChain.getState().reset();
							setArmed(false);
							setError("");
							toast("Chain reset to genesis");
						},
						children: "Yes, back to genesis"
					}), /* @__PURE__ */ (0, import_jsx_runtime.jsx)(Button, {
						type: "button",
						variant: "ghost",
						onClick: () => setArmed(false),
						children: "Keep it"
					})]
				}) : /* @__PURE__ */ (0, import_jsx_runtime.jsx)("button", {
					type: "button",
					className: "min-h-11 text-sm text-faint",
					onClick: () => setArmed(true),
					children: "Reset this chain"
				})
			})
		]
	});
}
var SplitComponent = WalletView;
//#endregion
export { SplitComponent as component };
