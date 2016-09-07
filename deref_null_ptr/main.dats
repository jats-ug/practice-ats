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

extern fun may_ret_null1 (a: int): [l:addr] (int @ l | ptr l) = "mac#may_ret_null"
extern castfn consume_ret_null1 {l:addr} (int @ l | ptr l): void
extern fun may_ret_null2 (a: int): [l:addr] (option_v(int @ l, l > null) | ptr l) = "mac#may_ret_null"
extern castfn consume_ret_null2 {l:addr} (option_v(int @ l, l > null) | ptr l): void

fun{a:t@ype} my_deref {l:agz} (pfat: !a @ l | p: ptr l): a = !p

fun call_may_ret_null1 (): void = {
  val (pfat | p) = may_ret_null1 0
//  val () = println! !p // => SEGV at run-time
//  val () = print_int (my_deref (pfat | p)) // => Error at compile-time
  val () = if p > 0 then print_int (my_deref (pfat | p))
  val () = consume_ret_null1 (pfat | p)
  //
  val (pfat | p) = may_ret_null1 1
  val () = println! !p
  val () = if p > 0 then print_int (my_deref (pfat | p))
  val () = consume_ret_null1 (pfat | p)
  val () = println! ""
}

fun call_may_ret_null2 (): void = {
  // may_ret_null2
  val (pfopt | p) = may_ret_null2 0
  val () = if p > 0 then {
    prval Some_v (pfat) = pfopt
    val () = println! !p
    val () = print_int (my_deref (pfat | p))
    prval () = pfopt := Some_v (pfat)
  }
  val () = consume_ret_null2 (pfopt | p)
  //
  val (pfopt | p) = may_ret_null2 1
  val () = if p > 0 then {
    prval Some_v (pfat) = pfopt
    val () = println! !p
    val () = print_int (my_deref (pfat | p))
    prval () = pfopt := Some_v (pfat)
  }
  val () = consume_ret_null2 (pfopt | p)
  val () = println! ""
}

implement main0 () = {
  val () = call_may_ret_null1 ()
  val () = call_may_ret_null2 ()
}
