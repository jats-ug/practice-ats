#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

fn sum {m:nat}(x : int(m)) :<!wrt> int =
  let
    fun loop {n:nat}{l:addr} .<n>. (pf : !int @ l | n : int(n), res : ptr(l)) :<!wrt> void =
      case+ n of
        | 0 => ()
        | n =>> let
          val () = !res := !res + n
        in
          loop(pf | n - 1, res)
        end
    var ret: int with pf = 0
    val () = loop(pf | x, addr@ret)
  in
    ret
  end

implement main0 () =
  println! (sum(800000000))
