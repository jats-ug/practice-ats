#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

fun tally() : (int, int) = let
  fun loop (count : int, result : int) : (int, int) = let
      val c = fileref_getc (stdin_ref)
    in
      if c >= 0 then loop (count + 1, result + c)
      else (count, result)
    end
  in
    loop (0, 0)
  end

implement main0() = {
  val (count, result) = tally()
  val () = println!("count=", count)
  val () = println!("result=", result)
}
