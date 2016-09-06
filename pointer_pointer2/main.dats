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

viewdef ptr_v_1 (a:t@ype, l:addr) = a @ l
dataview ptr_v_2 (a:t@ype+, l0: addr, l1: addr) =
  | ptr_v_2_cons(a, l0, l1) of (ptr l1 @ l0, ptr_v_1 (a, l1))
dataview ptr_v_3 (a:t@ype+, l0:addr, l1:addr, l2:addr) =
  | ptr_v_3_cons(a, l0, l1, l2) of (ptr l1 @ l0, ptr_v_2 (a, l1, l2))

fun foo {l1,l2:addr} (pfppv: !ptr_v_2(int, l1, l2) | p: ptr l1): void = {
  prval ptr_v_2_cons (pfat1, pfat2) = pfppv
  val () = println! (!(!p))
  prval () = pfppv := ptr_v_2_cons (pfat1, pfat2)
}

fun bar {l1,l2:addr} (pfppv: !ptr_v_2(struct_foo, l1, l2) | p: ptr l1): void = {
  prval ptr_v_2_cons (pfat1, pfat2) = pfppv
  val () = println! (!p)->a
  prval () = pfppv := ptr_v_2_cons (pfat1, pfat2)
}

implement main0 () = {
  var i: int = 10
  var pi = addr@i
  prval ppvi = ptr_v_2_cons (view@pi, view@i)
  val () = foo (ppvi | addr@pi)
  prval ptr_v_2_cons (pfat1, pfat2) = ppvi
  prval () = view@pi := pfat1
  prval () = view@i := pfat2

  var f: struct_foo
  val () = f.a := 20
  var pf = addr@f
  prval ppvf = ptr_v_2_cons (view@pf, view@f)
  val () = bar (ppvf | addr@pf)
  prval ptr_v_2_cons (pfat1, pfat2) = ppvf
  prval () = view@pf := pfat1
  prval () = view@f := pfat2
}
