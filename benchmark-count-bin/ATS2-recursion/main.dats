#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

fun tally() : int = let
  fun loop (res : int) : int = let
      val c = fileref_getc (stdin_ref)
    in
      if c >= 0 then loop (res + c)
      else res
    end
  in
    loop (0)
  end

implement main0() = {
  val res = tally()
  val () = println!("res=", res)
}
