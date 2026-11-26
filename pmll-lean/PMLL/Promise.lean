import PMLL

namespace PMLL

inductive Promise where
  | pending
  | ready (solution : String) (wasUnknown : Bool)
  deriving Repr, DecidableEq

def iterKey (i : Nat) : String := s!"iter:{i}"

def solKey : String := "sol"

def deposit (s : Silo) (i : Nat) : Silo :=
  s.record i (iterKey i) "no solution in this iteration"

/-- Every past iteration, one slot each. None of them stores the solution. -/
def iterations (fuel : Nat) (s : Silo) : Silo :=
  (List.range fuel).foldl (fun acc i => deposit acc i) s

def peekPast (s : Silo) (fuel : Nat) : List (Option String) :=
  (List.range fuel).map fun i => peek s (iterKey i)

def renderAsg (a : List (Option Bool)) : String :=
  let parts := a.foldl (fun (acc : List String × Nat) bit =>
    let (out, i) := acc
    match bit with
    | none => (out, i + 1)
    | some b =>
      let word := if b then s!"x{i + 1}=true" else s!"x{i + 1}=false"
      (out ++ [word], i + 1)) ([], 0)
  String.intercalate " " parts.1

/-- Peek every stored iteration. Return a promise only after those peeks miss `sol`.
    The ready value is then a solution that was not in memory. -/
def resolveFrom (s : Silo) (fuel : Nat) (n : Nat) (clauses : List (List Int)) (budget : Nat) :
    Promise :=
  let past := peekPast s fuel
  match peek s solKey with
  | some known => Promise.ready known false
  | none =>
    let missed := past.all fun hit => hit == some "no solution in this iteration"
    if missed && past.length == fuel then
      match refine n clauses budget with
      | (.sat, some c) => Promise.ready (renderAsg c.a) true
      | _ => Promise.pending
    else
      Promise.pending

def resolveUnknown (fuel : Nat) : Promise :=
  let s := iterations fuel (Silo.empty (fuel + 2))
  resolveFrom s fuel 2 satExample (budgetFor 2)

def resolveKnown (fuel : Nat) : Promise :=
  let s := iterations fuel (Silo.empty (fuel + 2))
  let s := s.record fuel solKey "x1=false x2=true"
  resolveFrom s fuel 2 satExample (budgetFor 2)

def unknownSolution : Promise := resolveUnknown 4

theorem unknown_solution_was_not_known :
    unknownSolution = Promise.ready "x1=false x2=true" true := by
  native_decide

theorem known_solution_is_not_fresh :
    resolveKnown 4 = Promise.ready "x1=false x2=true" false := by
  native_decide

theorem past_iterations_do_not_hold_the_solution :
    peek (iterations 4 (Silo.empty 6)) solKey = none := by
  native_decide

end PMLL
