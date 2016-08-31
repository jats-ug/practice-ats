#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

vtypedef foo = @{ x= int, p= [l:addr] ptr l }
vtypedef bar = @{ x= int, p= [l:addr] ptr l }

fun take_foo_p {l1:agz} (pf: !foo @ l1 | p: ptr l1):
               [l2:addr] (bar @ l2, bar @ l2 -<lin,prf> void | ptr l2) = (pf, fpf | bar) where {
  extern praxi __cast {l:addr} (ptr l): (bar @ l, bar @ l -<lin,prf> void)
  val bar = p->p
  prval (pf, fpf) = __cast bar // danger!
}

fun take_bar_p {l1:agz} (pf: !bar @ l1 | p: ptr l1):
               [l2:addr] (foo @ l2, foo @ l2 -<lin,prf> void | ptr l2) = (pf, fpf | foo) where {
  extern praxi __cast {l:addr} (ptr l): (foo @ l, foo @ l -<lin,prf> void)
  val foo = p->p
  prval (pf, fpf) = __cast foo // danger!
}

fun init_foobar {l1,l2:agz} (pffoo: !foo? @ l1 >> foo @ l1,
                             pfbar: !bar? @ l2 >> bar @ l2 |
                             pfoo: ptr l1, pbar: ptr l2): void = {
  val () = pfoo->x := 10
  val () = pfoo->p := pbar // danger!
  val () = pbar->x := 20
  val () = pbar->p := pfoo // danger!
}

fun print_foobar {l:agz} (pf: !foo@l | p: ptr l): void = {
  val (pfbar, fpfbar | pbar) = take_foo_p(pf | p)
  val () = if pbar > 0 then print_bar (pfbar | pbar)
  prval () = fpfbar pfbar
}
and print_bar {l:agz} (pfbar: !bar @ l | pbar: ptr l): void = {
  val (pffoo, fpffoo | pfoo) = take_bar_p (pfbar | pbar)
  val () = println! ("bar x=", pbar->x, " p=", pbar->p)
  val () = if pfoo > 0 then print_foo (pffoo | pfoo)
  prval () = fpffoo pffoo
}
and print_foo {l:agz} (pffoo: !foo@l | pfoo: ptr l): void = {
  val () = println! ("foo x=", pfoo->x, " p=", pfoo->p)
}

implement main0 () = {
  // Init
  var vfoo : foo
  var vbar : bar
  val () = init_foobar (view@vfoo, view@vbar | addr@vfoo, addr@vbar)
  val () = print_foobar (view@vfoo | addr@vfoo)
}
