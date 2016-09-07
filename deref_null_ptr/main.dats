#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

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
extern fun may_ret_null2 (a: int): [l:addr] (int @ l | ptr l) = "mac#may_ret_null"

fun{a:t@ype} my_deref {l:agz} (pfat: !a @ l | p: ptr l): a = !p

implement main0 () = {
}
