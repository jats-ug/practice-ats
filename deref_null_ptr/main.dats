#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload UN = "prelude/SATS/unsafe.sats"

%{#
static int ret = 10;
int *may_ret_null(int a) {
  if (0 == a) {
    return NULL;
  }
  return &ret;
}
%}

extern fun may_ret_null (a: int): [l:addr] (int @ l | ptr l) = "mac#may_ret_null"
extern castfn consume_ret_null {l:addr} (int @ l | ptr l): void

fun{a:t@ype} my_deref {l:agz} (pfat: !a @ l | p: ptr l): a = !p

implement main0 () = {
  val (pfat | p) = may_ret_null 0
//  val () = println! !p // => SEGV at run-time
//  val () = print_int (my_deref (pfat | p)) // => Error at compile-time
  val () = if p > 0 then print_int (my_deref (pfat | p))
  val () = consume_ret_null (pfat | p)

  val (pfat | p) = may_ret_null 1
  val () = println! !p
  val () = if p > 0 then print_int (my_deref (pfat | p))
  val () = consume_ret_null (pfat | p)
}
