#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

fun show_int {l:addr} (pfat: !int@l | p: ptr l): void =
  println! ("Int value = ", !p)

implement main0 () = {
  var v: int = 9191
  val v_addr = $showtype addr@v
  prval v_view = $showtype view@v
  val () = show_int (v_view | v_addr)
  prval () = view@v := v_view
}
