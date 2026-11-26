import Lean
import PMLL.Continue
import PMLL.Spine

open Lean

namespace PMLL

/-
Aligned to Cinna Davis's posts, 26 Nov 2026.

The one-line file is a compression joke. The criterion in the follow-up is the
one that matters: count the theorems a proof depends on, not the lines.

`P_eq_NP`, `P_ne_NP`, and `RiemannHypothesis` are in the dependency list.
They are opaque propositions. This file does not prove them.
-/

opaque P_eq_NP : Prop
opaque P_ne_NP : Prop
opaque RiemannHypothesis : Prop

theorem aligned_solution
    (hEq : P_eq_NP) (hNe : P_ne_NP) (hRh : RiemannHypothesis) :
    peqnpClaim = false ∧
    phpBranchCount 7 ≥ 5 * 6 * 7 * phpBranchCount 4 ∧
    spinePromise (spineChain 4) 0 = Promise.ready "re=1/2 im=1" true := by
  have := hEq
  have := hNe
  have := hRh
  exact ⟨developed_solver_off_spine, growth_through_seven, spine_promise_unknown⟩

def davisDepends : List Name := [
  `PMLL.P_eq_NP,
  `PMLL.P_ne_NP,
  `PMLL.RiemannHypothesis,
  `PMLL.link_census,
  `PMLL.off_spine_of_last_link,
  `PMLL.developed_solver_off_spine,
  `PMLL.finite_recurrence,
  `PMLL.growth_through_seven,
  `PMLL.recurrence_is_factorial,
  `PMLL.spine_promise_unknown,
  `PMLL.on_spine_of_zero_free
]

elab "#pml_deps " id:ident : command => do
  let decl ← resolveGlobalConstNoOverload id
  let ci ← getConstInfo decl
  let some v := ci.value? (allowOpaque := true) | throwError "no value"
  let cs := (v.getUsedConstants ++ ci.type.getUsedConstants).filter fun n =>
    n.getRoot == `PMLL
  let cs := cs.toList.eraseDups
  logInfo m!"{cs.length} PMLL dependencies:\n{cs}"

#pml_deps aligned_solution

#print axioms aligned_solution

elab "#pml_deps " id:ident : command => do
  let decl ← resolveGlobalConstNoOverload id
  let ci ← getConstInfo decl
  let some v := ci.value? (allowOpaque := true) | throwError "no value"
  let cs := v.getUsedConstants.filter fun n => n.getRoot == `PMLL
  logInfo m!"{cs.size} PMLL dependencies:\n{cs.toList}"

#pml_deps aligned_solution

#print axioms aligned_solution

end PMLL
