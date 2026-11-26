import { i as __toESM } from "../_runtime.mjs";
import { C as require_jsx_runtime, Y as require_react, x as useNavigate } from "../_libs/@tanstack/react-router+[...].mjs";
import { A as useChain, d as formatInt, g as label } from "./store-DXz1-2hr.mjs";
import { i as ResponsiveContainer, n as YAxis, r as Area, t as AreaChart } from "../_libs/recharts+[...].mjs";
//#region node_modules/.nitro/vite/services/ssr/assets/ui-B1NIJINu.js
var import_react = /* @__PURE__ */ __toESM(require_react());
var import_jsx_runtime = require_jsx_runtime();
function useNow() {
	const [now, setNow] = (0, import_react.useState)(0);
	(0, import_react.useEffect)(() => {
		setNow(Date.now());
		const id = window.setInterval(() => setNow(Date.now()), 1e3);
		return () => window.clearInterval(id);
	}, []);
	return now;
}
function useMounted() {
	const [on, setOn] = (0, import_react.useState)(false);
	(0, import_react.useEffect)(() => setOn(true), []);
	return on;
}
function Button({ variant = "primary", className = "", ...props }) {
	return /* @__PURE__ */ (0, import_jsx_runtime.jsx)("button", {
		className: `inline-flex min-h-11 items-center justify-center gap-2 rounded-lg px-4 text-sm font-medium transition-colors disabled:pointer-events-none disabled:opacity-40 ${variant === "primary" ? "bg-gold text-ink hover:bg-gold-2" : "border border-line bg-transparent text-paper hover:border-gold"} ${className}`,
		...props
	});
}
function AmountField({ id, label: fieldLabel, value, onChange, onMax, suffix }) {
	return /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", {
		className: "flex flex-col gap-2",
		children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)("label", {
			htmlFor: id,
			className: "text-sm text-muted",
			children: fieldLabel
		}), /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", {
			className: "flex items-center rounded-lg border border-line bg-ink focus-within:border-gold",
			children: [
				/* @__PURE__ */ (0, import_jsx_runtime.jsx)("input", {
					id,
					inputMode: "decimal",
					autoComplete: "off",
					value,
					placeholder: "0.00",
					onChange: (event) => onChange(event.target.value),
					className: "min-h-12 w-full bg-transparent px-3 text-lg tabular-nums outline-none"
				}),
				/* @__PURE__ */ (0, import_jsx_runtime.jsx)("span", {
					className: "shrink-0 text-sm text-muted",
					children: suffix
				}),
				onMax ? /* @__PURE__ */ (0, import_jsx_runtime.jsx)("button", {
					type: "button",
					onClick: onMax,
					className: "min-h-12 px-3 text-sm text-gold",
					children: "Max"
				}) : null
			]
		})]
	});
}
function Notice({ children }) {
	return /* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
		role: "alert",
		className: "min-h-5 text-sm text-copper",
		children
	});
}
function Page({ eyebrow, title, lede, children }) {
	return /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("div", {
		className: "flex w-full flex-col gap-8 py-8 md:py-10",
		children: [/* @__PURE__ */ (0, import_jsx_runtime.jsxs)("header", {
			className: "flex max-w-xl flex-col gap-2",
			children: [
				/* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
					className: "text-sm text-muted",
					children: eyebrow
				}),
				/* @__PURE__ */ (0, import_jsx_runtime.jsx)("h1", {
					className: "text-4xl md:text-5xl",
					children: title
				}),
				/* @__PURE__ */ (0, import_jsx_runtime.jsx)("p", {
					className: "text-muted",
					children: lede
				})
			]
		}), children]
	});
}
function PriceChart({ prices, labelText }) {
	const ready = useMounted();
	const data = prices.map((p, i) => ({
		i,
		p
	}));
	return /* @__PURE__ */ (0, import_jsx_runtime.jsx)("div", {
		role: "img",
		"aria-label": labelText,
		className: "h-44 w-full min-w-0 md:h-56",
		children: ready ? /* @__PURE__ */ (0, import_jsx_runtime.jsx)(ResponsiveContainer, {
			width: "100%",
			height: "100%",
			children: /* @__PURE__ */ (0, import_jsx_runtime.jsxs)(AreaChart, {
				data,
				margin: {
					top: 8,
					right: 4,
					left: 0,
					bottom: 0
				},
				children: [/* @__PURE__ */ (0, import_jsx_runtime.jsx)(YAxis, {
					domain: ["auto", "auto"],
					tick: {
						fill: "var(--color-faint)",
						fontSize: 12
					},
					axisLine: false,
					tickLine: false,
					width: 56,
					tickFormatter: (value) => value.toFixed(3)
				}), /* @__PURE__ */ (0, import_jsx_runtime.jsx)(Area, {
					type: "monotone",
					dataKey: "p",
					stroke: "var(--color-gold)",
					fill: "var(--color-gold)",
					fillOpacity: .16,
					strokeWidth: 2,
					dot: false,
					activeDot: false,
					isAnimationActive: false
				})]
			})
		}) : null
	});
}
function BlockStrip() {
	const blocks = useChain((s) => s.blocks);
	const setFocus = useChain((s) => s.setFocus);
	const navigate = useNavigate();
	const tip = blocks.slice(0, 7).reverse();
	return /* @__PURE__ */ (0, import_jsx_runtime.jsx)("div", {
		className: "flex gap-2 overflow-x-auto pb-1",
		children: tip.map((block, index) => {
			const last = index === tip.length - 1;
			return /* @__PURE__ */ (0, import_jsx_runtime.jsxs)("button", {
				type: "button",
				onClick: () => {
					setFocus(block.height);
					navigate({ to: "/ledger" });
				},
				className: `min-h-16 min-w-24 shrink-0 rounded-lg border px-3 py-2 text-left ${last ? "border-gold" : "border-line"}`,
				children: [
					/* @__PURE__ */ (0, import_jsx_runtime.jsx)("span", {
						className: "block font-mono text-xs tabular-nums text-faint",
						children: formatInt(block.height)
					}),
					/* @__PURE__ */ (0, import_jsx_runtime.jsx)("span", {
						className: "mt-1 block text-sm text-paper",
						children: label(block.producer)
					}),
					/* @__PURE__ */ (0, import_jsx_runtime.jsx)("span", {
						className: "block text-xs text-muted",
						children: block.txs.length === 1 ? "1 tx" : `${block.txs.length} tx`
					})
				]
			}, block.hash);
		})
	});
}
//#endregion
export { Page as a, Notice as i, BlockStrip as n, PriceChart as o, Button as r, useNow as s, AmountField as t };
