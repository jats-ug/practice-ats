#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

%{#
#ifndef _STRUCT_GEN_H_
#define _STRUCT_GEN_H_
struct foo {
  int a;
};
#endif /* _STRUCT_GEN_H_ */
%}

typedef struct_foo = $extype_struct"struct foo" of {
  a =  int
}

dataview pptr_v (a:t@ype+, addr, int) =
  | {l:addr} pptr_v_nil (a, l, 0) of a @ l
  | {l,l_nxt:addr}{n:nat} pptr_v_cons (a, l, n+1) of
      ((ptr l_nxt) @ l, pptr_v (a, l_nxt, n))

fun foo {l1:addr} (pfppv: !pptr_v(int, l1, 1) | p: ptr l1): void = {
  prval pptr_v_cons (pfat1, pf1ppv) = pfppv
  prval pptr_v_nil pfat2 = pf1ppv
  val () = println! (!(!p))
  prval () = pfppv := pptr_v_cons (pfat1, pptr_v_nil pfat2)
}

fun bar {l1:addr} (pfppv: !pptr_v(struct_foo, l1, 1) | p: ptr l1): void = {
  prval pptr_v_cons (pfat1, pf1ppv) = pfppv
  prval pptr_v_nil pfat2 = pf1ppv
  val () = println! (!p)->a
  prval () = pfppv := pptr_v_cons (pfat1, pptr_v_nil pfat2)
}

implement main0 () = {
  var i: int = 0
  var pi = addr@i
  prval ppvi = pptr_v_cons (view@pi, pptr_v_nil (view@i))
  prval pptr_v_cons (pfat1, ppvi1) = ppvi
  prval pptr_v_nil pfat2 = ppvi1
  prval () = view@pi := pfat1
  prval () = view@i := pfat2

  // xxx Should call `bar`
}
