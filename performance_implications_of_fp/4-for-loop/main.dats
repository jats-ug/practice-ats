#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

fn sum {m:nat}(x : int(m)) :<!wrt> int =
  let
    var res: int = 0
    var i: int
    val () = for* { i : nat | i <= m } .<i>. (i : int(i)) =>
        (i := x ; i > 0 ; i := i - 1)
        (res := res + i)
  in
    res
  end

implement main0 () =
  println! (sum(800000000))
