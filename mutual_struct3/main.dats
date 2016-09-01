(* From https://github.com/githwxi/ATS-Postiats-test/blob/master/contrib/hwxi/TEST30/struct1.dats *)

#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload UN = "prelude/SATS/unsafe.sats"
staload "gen.sats"

// Should be user code
fun init_foobar {l1,l2:agz} (pffoo: !struct_foo? @ l1,
                             pfbar: !struct_bar? @ l2 |
                             pfoo: ptr l1, pbar: ptr l2):
                             (aPtr1(struct_foo), aPtr1(struct_bar)) = ret where {
  val () = pfoo->pp := addr@(pfoo->p) // Danger! It's raw pointer.
  val pfoo = $UN.castvwtp0{aPtr1(struct_foo)}(pfoo) // Danger! It's unsafe cast.
  val pbar = $UN.castvwtp0{aPtr1(struct_bar)}(pbar) // Danger! It's unsafe cast.
  val () = pfoo.x(10)
  val () = pfoo.p(pbar)
  val () = pbar.x(20)
  val () = pbar.p(pfoo)
  val ret = (pfoo, pbar)
}

fun print_foobar (pfoo: !aPtr1(struct_foo)): void = {
  val pbar = pfoo.p()
  val () = if isneqz(pbar) then print_bar pbar
  prval () = $UN.cast2void(pbar)
  val pfoo_pp = pfoo.pp()
  val () = if isneqz(pfoo_pp) then {
    val (fpf | pfoo_pp_) = vtget1(pfoo_pp)
    val () = if isneqz(pfoo_pp_) then print_bar pfoo_pp_
    prval () = minus_addback(fpf, pfoo_pp_ | pfoo_pp)
  }
  prval () = $UN.cast2void(pfoo_pp)
}
and print_bar (pbar: !aPtr1(struct_bar)): void = {
  val pfoo = pbar.p()
  val () = println! ("bar x=", pbar.x(), " p=", aptr2ptr pfoo)
  val () = if isneqz(pfoo) then print_foo pfoo
  prval () = $UN.cast2void(pfoo)
}
and print_foo (pfoo: !aPtr1(struct_foo)): void = {
  val pbar = pfoo.p()
  val () = println! ("foo x=", pfoo.x(), " p=", aptr2ptr pbar)
  prval () = $UN.cast2void(pbar)
}

implement main0 () = {
  var foo: struct_foo
  var bar: struct_bar
  val (pfoo, pbar) = init_foobar (view@foo, view@bar | addr@foo, addr@bar)
  prval () = $UN.cast2void(pbar)
  val () = print_foobar pfoo
  prval () = $UN.cast2void(pfoo)
}
