import { createFileRoute } from "@tanstack/react-router";
import { StakeView } from "@/components/q/stake-view";

export const Route = createFileRoute("/_app/stake")({
  component: StakeView,
});
