import { createFileRoute } from "@tanstack/react-router";
import { WalletView } from "@/components/q/wallet-view";

export const Route = createFileRoute("/_app/wallet")({
  component: WalletView,
});
