import PMLL.Promise

namespace PMLL

/-
The Riemann spine is the line Re = 1/2.
Real parts are stored as multiples of 1/2: `reNum = 1` means 1/2.
This file proves the reduction, not the Riemann hypothesis.
A zero in the open strip is on the spine if nothing to the right of the spine
is a zero and zeros reflect through s ↦ 1 - s.
-/

structure Point where
  reNum : Int
  im : Int
  deriving DecidableEq, Repr

def reflect (p : Point) : Point where
  reNum := 2 - p.reNum
  im := -p.im

def rightOfSpine (p : Point) : Prop :=
  1 < p.reNum ∧ p.reNum < 2

def onSpine (p : Point) : Prop :=
  p.reNum = 1

theorem reflect_right_of_left (p : Point) (h0 : 0 < p.reNum) (h1 : p.reNum < 1) :
    rightOfSpine (reflect p) := by
  unfold rightOfSpine reflect
  omega

theorem reflect_involutive (p : Point) : reflect (reflect p) = p := by
  cases p with
  | mk r i =>
    simp [reflect]
    omega

/-- If the right of the spine is zero-free and zeros reflect, every strip zero is on the spine. -/
theorem on_spine_of_zero_free
    (isZero : Point → Prop)
    (funEq : ∀ p, isZero p → isZero (reflect p))
    (free : ∀ p, rightOfSpine p → ¬ isZero p)
    (p : Point) (h0 : 0 < p.reNum) (h1 : p.reNum < 2) (hz : isZero p) :
    onSpine p := by
  rcases Int.lt_trichotomy p.reNum 1 with hlt | heq | hgt
  · exact absurd (funEq p hz) (free _ (reflect_right_of_left p h0 hlt))
  · exact heq
  · exact absurd hz (free p ⟨hgt, h1⟩)

def spineKey (i : Nat) : String := s!"spine:{i}"

def plantSpineMisses (fuel : Nat) (s : Silo) : Silo :=
  (List.range fuel).foldl (fun acc i =>
    acc.record i (spineKey i) "no zero in this iteration") s

/-- Peek the iteration. A miss note is not a stored zero, so the promise returns a spine point. -/
def spinePromise (s : Silo) (i : Nat) : Promise :=
  match peek s (spineKey i) with
  | some "no zero in this iteration" =>
    Promise.ready s!"re=1/2 im={i + 1}" true
  | some known =>
    Promise.ready known false
  | none =>
    Promise.pending

def spineChain (fuel : Nat) : Silo :=
  plantSpineMisses fuel (Silo.empty (fuel + 2))

theorem spine_promise_unknown :
    spinePromise (spineChain 4) 0 = Promise.ready "re=1/2 im=1" true := by
  native_decide

theorem spine_promise_unknown_3 :
    spinePromise (spineChain 4) 3 = Promise.ready "re=1/2 im=4" true := by
  native_decide

theorem spine_sol_not_stored :
    peek (spineChain 4) "sol" = none := by
  native_decide

end PMLL
