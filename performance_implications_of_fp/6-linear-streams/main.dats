#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

fn sum {m:nat}(x : int(m)) :<!ntm> int =
  let
    fun build_stream {i:nat} .<i>. (y : int(i)) :<> stream_vt(int) =
      case+ y of
        | 0 => $ldelay(stream_vt_nil)
        | n =>> $ldelay(stream_vt_cons(y, build_stream(y - 1)))
    fun fold_stream(xs : stream_vt(int)) :<!ntm> int =
      case+ !xs of
        | ~stream_vt_nil() => 0
        | ~stream_vt_cons (y, ys) => y + fold_stream(ys)
  in
    fold_stream(build_stream(x))
  end

implement main0 () =
  println! (sum(800000000))
