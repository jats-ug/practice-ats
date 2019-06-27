#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

fun sum_r {m:nat} .<m>. (x : int(m), s : int) :<> int =
  case+ x of
    | 0 => s
    | n =>> sum_r(x - 1, s + x)

fun sum {m:nat} .<m>. (x : int(m)) :<> int =
  sum_r (x, 0)

implement main0 () =
  println! (sum(800000000))
