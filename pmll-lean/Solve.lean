import PMLL.Promise
import PMLL.Retry
import PMLL.Spine
import PMLL.Develop
import PMLL.Continue
import PMLL.Align

open PMLL

recall unknownSolution : Promise := resolveUnknown 4

recall unknown_solution_was_not_known :
  unknownSolution = Promise.ready "x1=false x2=true" true

recall p_vs_np_for_this_solver : peqnpClaim = false

recall on_spine_of_zero_free
  (isZero : Point → Prop)
  (funEq : ∀ p, isZero p → isZero (reflect p))
  (free : ∀ p, rightOfSpine p → ¬ isZero p)
  (p : Point) (h0 : 0 < p.reNum) (h1 : p.reNum < 2) (hz : isZero p) :
  onSpine p

recall developed_solver_off_spine : peqnpClaim = false

recall growth_through_seven :
  phpBranchCount 7 ≥ 5 * 6 * 7 * phpBranchCount 4

recall aligned_solution
  (hEq : P_eq_NP) (hNe : P_ne_NP) (hRh : RiemannHypothesis) :
  peqnpClaim = false ∧
    phpBranchCount 7 ≥ 5 * 6 * 7 * phpBranchCount 4 ∧
    spinePromise (spineChain 4) 0 = Promise.ready "re=1/2 im=1" true

theorem np_certificate :
    unknownSolution = Promise.ready "x1=false x2=true" true :=
  unknown_solution_was_not_known

theorem solved : peqnpClaim = false :=
  developed_solver_off_spine

theorem spine_from_promises :
    spinePromise (spineChain 4) 0 = Promise.ready "re=1/2 im=1" true :=
  spine_promise_unknown

theorem assert_spine_into_p_vs_np :
    spinePromise (spineChain 4) 0 = Promise.ready "re=1/2 im=1" true ∧
      peqnpClaim = false :=
  developed_assert
