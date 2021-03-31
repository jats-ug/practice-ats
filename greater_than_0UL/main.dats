#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

fun concat_rnd_base {i:int | i > 0}  (align: ulint i): ulint =
  undefined()

fun concat_exec_imgact {i:int} (pagesizes: &(@[ulint i][3])): ulint = let
    val psize = (if pagesizes[1] > 0UL
                 then pagesizes[1] else 1UL): [i:int | i > 0] ulint(i)
  in
    concat_rnd_base(psize)
  end

implement main0 () = {
}
