#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload UN = "prelude/SATS/unsafe.sats"
staload _ = "prelude/DATS/array.dats"
staload _ = "prelude/DATS/arrayptr.dats"

#define N 16

local
  var _global_arr: @[int][N]?
in
  fun arr_takeout (): (arrayptr (int, N)) = let
    extern castfn cast_takeout {l:addr} (ptr l): (arrayptr (int, N))
  in
    cast_takeout addr@_global_arr
  end
  fun arr_addback (arr: arrayptr (int, N)): void = let
    extern castfn cast_addback (arr: arrayptr (int, N)): void
  in
    cast_addback (arr)
  end
end

fun{a:viewt@ype}
print_arr (arr: !arrayptr (INV(a), N)):void = {
  implement array_foreach$fwork<int><int> (x, env) = env := env + x
  val _ = arrayptr_foreach (arr, i2sz N)
}

implement main0 () = {
  val arr = arr_takeout ()
  val () = print_arr arr
  val () = arr_addback (arr)
}
