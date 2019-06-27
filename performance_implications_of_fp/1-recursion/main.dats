#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

fun sum {m:nat} .<m>. (x : int(m)) :<> int =
  let
    fun loop {m:nat} .<m>. (y : int(m), res : int) :<> int =
      case+ y of
        | 0 => res
        | n =>> loop(y - 1, res + y)
  in
    loop (x, 0)
  end

implement main0 () =
  assertloc (sum(800000000) = 267879424)
