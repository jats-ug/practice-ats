#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

fn sum {m:nat}(x : int(m)) :<!wrt> int =
  let
    fun loop {n:nat} .<n>. (y : int(n), res : &int? >> int) :<!wrt> void =
      case+ y of
        | 0 => res := 0
        | n =>> (loop(y - 1, res) ; res := res + y)
    var res: int
    val () = loop(x, res)
  in
    res
  end

implement main0 () =
  println! (sum(800000000))
