import { createFileRoute } from "@tanstack/react-router";
import { LedgerView } from "@/components/q/ledger-view";

export const Route = createFileRoute("/_app/ledger")({
  component: LedgerView,
});
