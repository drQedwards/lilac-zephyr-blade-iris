import PMLL

namespace PMLL

/-- Pigeons into fewer holes. Variable `p * holes + h`, literals 1-based. -/
def php (pigeons holes : Nat) : List (List Int) := Id.run do
  let id (p h : Nat) : Int := p * holes + h + 1
  let mut cs : List (List Int) := []
  for p in [:pigeons] do
    let mut c : List Int := []
    for h in [:holes] do
      c := c ++ [id p h]
    cs := cs ++ [c]
  for h in [:holes] do
    for a in [:pigeons] do
      for b in [a + 1 : pigeons] do
        cs := cs ++ [[-id a h, -id b h]]
  return cs

/-- Same DPLL as `dpll`, but returns the number of branch points. Depth fuel is `n + 2`. -/
def dpllBranches (n : Nat) (clauses : List (List Int)) (a : List (Option Bool)) (depth : Nat) :
    Flag × Nat :=
  match propagate n clauses a with
  | none => (.unsat, 0)
  | some a =>
    if checkConflict n clauses a then
      (.unsat, 0)
    else
      match firstOpen a with
      | none => (.sat, 0)
      | some v =>
        match depth with
        | 0 => (.unresolved, 0)
        | d + 1 =>
          match dpllBranches n clauses (setAsg a v false) d with
          | (.sat, c1) => (.sat, c1 + 1)
          | (.unresolved, c1) => (.unresolved, c1 + 1)
          | (.unsat, c1) =>
            match dpllBranches n clauses (setAsg a v true) d with
            | (.sat, c2) => (.sat, c1 + c2 + 1)
            | (.unresolved, c2) => (.unresolved, c1 + c2 + 1)
            | (.unsat, c2) => (.unsat, c1 + c2 + 1)
termination_by depth

def phpBranchCount (k : Nat) : Nat :=
  let holes := k - 1
  let n := k * holes
  (dpllBranches n (php k holes) (List.replicate n none) (n + 2)).2

def underQuadratic (k : Nat) : Bool :=
  phpBranchCount k ≤ (k * (k - 1)) ^ 2

/-- Finite stand-in for a polynomial bound on this solver: 4..7 pigeons inside n². -/
def peqnpClaim : Bool :=
  underQuadratic 4 && underQuadratic 5 && underQuadratic 6 && underQuadratic 7

theorem p_vs_np_for_this_solver : peqnpClaim = false := by
  native_decide

end PMLL

