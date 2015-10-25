#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload "rps.sats"
staload _ = "rps.dats"

implement main0 () = {
  val paper = p_rps_t()
  val (pf_win | win) = rps_win (paper)
  val () = println! (win, " win ", paper, ".") // => Scissors win Paper.
  val (_, _ | even) = rps_even (pf_win | win, paper)
  val () = println! (even, " even between ", win, " and ", paper, ".") // => Rock even between Scissors and Paper.
}
