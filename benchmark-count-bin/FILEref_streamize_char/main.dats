#include "share/HATS/temptory_staload_bucs320.hats"

fun tally(): (int, int) = let
    val cs = FILEref_streamize_char(the_stdin())
    impltmp stream_vt_foldleft0$fopr<char><(int, int)>(r0, c0) = (r0.0 + 1, r0.1 + $UN.cast{int}{char}(c0))
  in
    stream_vt_foldleft0<char><(int, int)>(cs, (0, 0))
  end

implfun main0() = {
  val (count, result) = tally()
  val () = println!("count=", count)
  val () = println!("result=", result)
}
