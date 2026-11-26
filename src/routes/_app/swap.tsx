import { createFileRoute } from "@tanstack/react-router";
import { SwapView } from "@/components/q/swap-view";

export const Route = createFileRoute("/_app/swap")({
  component: SwapView,
});
