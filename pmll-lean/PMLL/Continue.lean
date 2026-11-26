import PMLL.Retry
import PMLL.Develop

namespace PMLL

/-
Continuation toward P versus NP. Nothing here declares either side impossible.

`peqnpClaim = false` kills one degree for one solver on pigeons 4 through 7.
A separation would need every algorithm, every family, every degree.
The step proved here is the growth lemma for this solver: three checked
multiplications, and the theorem that a lasting multiplication is factorial.
-/

def fact (n : Nat) : Nat :=
  (List.range n).foldl (fun acc i => acc * (i + 1)) 1

theorem fact_succ (n : Nat) : fact (n + 1) = fact n * (n + 1) := by
  unfold fact
  rw [List.range_succ, List.foldl_append]
  rfl

theorem fact_four : fact 4 = 24 := by decide
theorem fact_seven : fact 7 = 5040 := by decide

/-- Lasting multiplication by the next integer produces a factorial lower bound. -/
theorem recurrence_is_factorial (b : Nat → Nat) (k : Nat)
    (h : ∀ j, j < k → b (j + 1) ≥ (j + 1) * b j) :
    fact k * b 0 ≤ b k := by
  induction k with
  | zero =>
    simp [fact]
  | succ k ih =>
    have hstep : (k + 1) * b k ≤ b (k + 1) := h k (Nat.lt_succ_self k)
    have ih' : fact k * b 0 ≤ b k :=
      ih fun j hj => h j (Nat.lt_succ_of_lt hj)
    rw [fact_succ]
    have hmul : fact k * (k + 1) * b 0 ≤ (k + 1) * b k := by
      have hmul' : (k + 1) * (fact k * b 0) ≤ (k + 1) * b k :=
        Nat.mul_le_mul_left (k + 1) ih'
      simpa [Nat.mul_assoc, Nat.mul_left_comm, Nat.mul_comm] using hmul'
    exact Nat.le_trans hmul hstep

theorem finite_recurrence :
    phpBranchCount 5 ≥ 5 * phpBranchCount 4 ∧
    phpBranchCount 6 ≥ 6 * phpBranchCount 5 ∧
    phpBranchCount 7 ≥ 7 * phpBranchCount 6 := by
  native_decide

theorem growth_through_seven :
    phpBranchCount 7 ≥ 5 * 6 * 7 * phpBranchCount 4 := by
  have h5 := finite_recurrence.1
  have h6 := finite_recurrence.2.1
  have h7 := finite_recurrence.2.2
  have h6' : 6 * (5 * phpBranchCount 4) ≤ 6 * phpBranchCount 5 :=
    Nat.mul_le_mul_left 6 h5
  have h7' : 7 * (6 * phpBranchCount 5) ≤ 7 * phpBranchCount 6 :=
    Nat.mul_le_mul_left 7 h6
  have h76 : 7 * (6 * (5 * phpBranchCount 4)) ≤ 7 * (6 * phpBranchCount 5) :=
    Nat.mul_le_mul_left 7 h6'
  have horder : 5 * 6 * 7 * phpBranchCount 4 = 7 * (6 * (5 * phpBranchCount 4)) := by
    ac_rfl
  rw [horder]
  exact Nat.le_trans h76 (Nat.le_trans h7' h7)

theorem degree_two_fails : peqnpClaim = false :=
  developed_solver_off_spine

end PMLL
