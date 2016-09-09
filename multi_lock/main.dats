#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

absvtype lock(s:int)

extern praxi init_lock (): lock(0)
extern praxi fini_lock (lock(0)): void

fun do_lock {s:nat} (pf: !lock(s) >> lock(s+1) | ):void = {
  prval () = __change (pf) where {
    extern praxi __change (pf: !lock(s) >> lock(s+1)): void
  }
  // Do detail
}

fun do_unlock {s:nat} (pf: !lock(s) >> lock(s-1) | ):void = {
  prval () = __change (pf) where {
    extern praxi __change (pf: !lock(s) >> lock(s-1)): void
  }
  // Do detail
}

fun foo {s:nat} (pf: !lock(s) >> lock(s-1) | ):void = {
  // Do something
  val () = do_unlock (pf | )
}

implement main0 () = {
  prval pflock = init_lock ()
  val () = do_lock (pflock | )
  val () = do_lock (pflock | )
  // Critical Region
  val () = do_unlock (pflock | )
  val () = if grandom_int() = 0 then foo (pflock | ) else do_unlock (pflock | )
  prval () = fini_lock pflock
}
