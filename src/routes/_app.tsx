import { createFileRoute } from "@tanstack/react-router";
import { Shell } from "@/components/q/shell";

export const Route = createFileRoute("/_app")({
  component: Shell,
});
