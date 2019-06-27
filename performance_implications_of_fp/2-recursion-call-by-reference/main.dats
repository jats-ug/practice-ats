#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

fn sum {m:nat}(x : int(m)) :<!wrt> int =
  let
    fun loop {n:nat} .<n>. (y : int(n), res : &int) :<!wrt> void =
      case+ y of
        | 0 => ()
        | n =>> (res := res + y ; loop(y - 1, res))
    var res: int = 0
    val () = loop(x, res)
  in
    res
  end

implement main0 () =
  assertloc (sum(800000000) = 267879424)
