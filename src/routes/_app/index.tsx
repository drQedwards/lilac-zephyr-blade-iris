import { createFileRoute } from "@tanstack/react-router";
import { MintView } from "@/components/q/mint-view";

export const Route = createFileRoute("/_app/")({
  component: MintView,
});
