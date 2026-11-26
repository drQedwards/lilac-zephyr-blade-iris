import PMLL.Retry
import PMLL.Spine

namespace PMLL

/-
Developed proof. Not a separation of P from NP, and not the Riemann hypothesis.

The bound-spine is n². The chain is
`underQuadratic 4 && underQuadratic 5 && underQuadratic 6 && underQuadratic 7`.
One census: the first three links are on the spine, the seventh pigeon is not.
A chain with a last link off the spine is off the spine.
The Riemann-spine promise stays at real part 1/2 and does not put the chain back.
-/

theorem link_census :
    underQuadratic 4 = true ∧ underQuadratic 5 = true ∧
      underQuadratic 6 = true ∧ underQuadratic 7 = false := by
  native_decide

theorem on_bound_4 : underQuadratic 4 = true := link_census.1
theorem on_bound_5 : underQuadratic 5 = true := link_census.2.1
theorem on_bound_6 : underQuadratic 6 = true := link_census.2.2.1
theorem off_bound_7 : underQuadratic 7 = false := link_census.2.2.2

/-- One false link falsifies a chain of four Boolean links. -/
theorem off_spine_of_last_link (a b c d : Bool) (h : d = false) :
    (a && b && c && d) = false := by
  simp [h]

theorem developed_solver_off_spine : peqnpClaim = false := by
  unfold peqnpClaim
  exact off_spine_of_last_link
    (underQuadratic 4) (underQuadratic 5) (underQuadratic 6) (underQuadratic 7)
    off_bound_7

/-- The spine promise is on Re = 1/2, and the bound-spine claim is still false. -/
theorem developed_assert :
    spinePromise (spineChain 4) 0 = Promise.ready "re=1/2 im=1" true ∧
      peqnpClaim = false :=
  ⟨spine_promise_unknown, developed_solver_off_spine⟩

/-- Geometry on the Riemann spine does not restore the bound. -/
theorem spine_reduction_leaves_the_bound
    (isZero : Point → Prop)
    (funEq : ∀ p, isZero p → isZero (reflect p))
    (free : ∀ p, rightOfSpine p → ¬ isZero p)
    (p : Point) (h0 : 0 < p.reNum) (h1 : p.reNum < 2) (hz : isZero p) :
    onSpine p ∧ peqnpClaim = false :=
  ⟨on_spine_of_zero_free isZero funEq free p h0 h1 hz, developed_solver_off_spine⟩

end PMLL
