#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

#define A 0
#define B 1
#define C 2
absvtype state(s:int)

fun a_to_b (pf: !state(A) >> state(B) | ): void = {
  val () = println! "Change state to B from A."
  prval () = __change (pf) where {
    extern praxi __change (pf: !state(A) >> state(B)): void
  }
}

fun b_to_c (pf: !state(B) >> state(C) | ): void = {
  val () = println! "Change state to C from B."
  prval () = __change (pf) where {
    extern praxi __change (pf: !state(B) >> state(C)): void
  }
}

fun do_in_c (pf: !state(C) | ): void =
  println! "Call from C."

fun run (pf: !state(A) >> state(C) | ): void = {
  val () = a_to_b (pf | )
  val () = b_to_c (pf | )
  val () = do_in_c (pf | )
}

implement main0 () = {
  prval pf = __produce () where {
    extern praxi __produce (): state(A)
  }
  val () = run (pf | )
  prval () = __consume (pf) where {
    extern praxi __consume (pf: state(C)): void
  }
}
