%{#
#ifndef _STRUCT_GEN_H_
#define _STRUCT_GEN_H_
struct bar;
struct foo {
  int x;
  struct bar *p;
  struct bar **pp;
};
struct bar {
  int x;
  struct foo *p;
};
#endif /* _STRUCT_GEN_H_ */
%}

// Should be semi-automatically generated code
vtypedef struct_c2ats_foo = $extype_struct "struct foo" of {
  x= int
, p= ptr // struct bar *
, pp= ptr // struct bar **
}
vtypedef struct_c2ats_bar = $extype_struct "struct bar" of {
  x= int
, p= ptr // struct foo *
}

// getter/setter in C
%{#
#ifndef _C2ATS_GETSET_GEN_H_
#define _C2ATS_GETSET_GEN_H_
static inline int struct_c2ats_foo_get_x (struct foo *obj) { return obj->x ; }
static inline void struct_c2ats_foo_set_x (struct foo *obj, int x) { obj->x = x; }
static inline void* struct_c2ats_foo_get_p (struct foo *obj) { return obj->p ; }
static inline void struct_c2ats_foo_set_p (struct foo *obj, void *v) { obj->p = v; }
static inline void* struct_c2ats_foo_get_pp (struct foo *obj) { return obj->pp ; }
static inline void struct_c2ats_foo_set_pp (struct foo *obj, void *v) { obj->pp = v; }

static inline int struct_c2ats_bar_get_x (struct bar *obj) { return obj->x ; }
static inline void struct_c2ats_bar_set_x (struct bar *obj, int v) { obj->x = v; }
static inline void* struct_c2ats_bar_get_p (struct bar *obj) { return obj->p ; }
static inline void struct_c2ats_bar_set_p (struct bar *obj, void *v) { obj->p = v; }
#endif /* _C2ATS_GETSET_GEN_H_ */
%}

// getter/setter in ATS
fun struct_c2ats_foo_get_x: (!aPtr1(struct_c2ats_foo)) -> int = "mac#"
fun struct_c2ats_foo_set_x: (!aPtr1(struct_c2ats_foo), int) -> void = "mac#"
fun struct_c2ats_foo_get_p: (!aPtr1(struct_c2ats_foo)) -> aPtr0(struct_c2ats_bar) = "mac#"
fun struct_c2ats_foo_set_p: (!aPtr1(struct_c2ats_foo), !aPtr1(struct_c2ats_bar)) -> void = "mac#"
fun struct_c2ats_foo_get_pp: (!aPtr1(struct_c2ats_foo)) -> aPtr0(aPtr0(struct_c2ats_bar)) = "mac#"
fun struct_c2ats_foo_set_pp: (!aPtr1(struct_c2ats_foo), !aPtr1(aPtr1(struct_c2ats_bar))) -> void = "mac#"
overload .x with struct_c2ats_foo_get_x
overload .x with struct_c2ats_foo_set_x
overload .p with struct_c2ats_foo_get_p
overload .p with struct_c2ats_foo_set_p
overload .pp with struct_c2ats_foo_get_pp
overload .pp with struct_c2ats_foo_set_pp

fun struct_c2ats_bar_get_x: (!aPtr1(struct_c2ats_bar)) -> int = "mac#"
fun struct_c2ats_bar_set_x: (!aPtr1(struct_c2ats_bar), int) -> void = "mac#"
fun struct_c2ats_bar_get_p: (!aPtr1(struct_c2ats_bar)) -> aPtr0(struct_c2ats_foo) = "mac#"
fun struct_c2ats_bar_set_p: (!aPtr1(struct_c2ats_bar), !aPtr1(struct_c2ats_foo)) -> void = "mac#"
overload .x with struct_c2ats_bar_get_x
overload .x with struct_c2ats_bar_set_x
overload .p with struct_c2ats_bar_get_p
overload .p with struct_c2ats_bar_set_p
