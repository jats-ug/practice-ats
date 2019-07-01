#include "share/HATS/temptory_staload_bucs320.hats"

fun tally(): int = let
    val cs = FILEref_streamize_char(the_stdin())
    impltmp stream_vt_foldleft0$fopr<char><int>(r0, c0) = r0 + $UN.cast{int}(c0)
  in
    stream_vt_foldleft0<char><int>(cs, 0)
  end

implfun main0() = {
  val res = tally()
  val () = println!("res=", res)
}
