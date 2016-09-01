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
vtypedef struct_foo = $extype_struct "struct foo" of {
  x= int
, p= ptr
, pp= ptr
}
vtypedef struct_bar = $extype_struct "struct bar" of {
  x= int
, p= ptr
}

// getter/setter in C
%{#
#ifndef _C2ATS_GETSET_GEN_H_
#define _C2ATS_GETSET_GEN_H_
static inline int struct_foo_ptr_get_x (struct foo *obj) { return obj->x ; }
static inline void struct_foo_ptr_set_x (struct foo *obj, int x) { obj->x = x; }
static inline void* struct_foo_ptr_get_p (struct foo *obj) { return obj->p ; }
static inline void struct_foo_ptr_set_p (struct foo *obj, void *v) { obj->p = v; }
static inline void* struct_foo_ptr_get_pp (struct foo *obj) { return obj->pp ; }
static inline void struct_foo_ptr_set_pp (struct foo *obj, void *v) { obj->pp = v; }

static inline int struct_bar_ptr_get_x (struct bar *obj) { return obj->x ; }
static inline void struct_bar_ptr_set_x (struct bar *obj, int v) { obj->x = v; }
static inline void* struct_bar_ptr_get_p (struct bar *obj) { return obj->p ; }
static inline void struct_bar_ptr_set_p (struct bar *obj, void *v) { obj->p = v; }
#endif /* _C2ATS_GETSET_GEN_H_ */
%}

// getter/setter in ATS
fun struct_foo_ptr_get_x: (!aPtr1(struct_foo)) -> int = "mac#"
fun struct_foo_ptr_set_x: (!aPtr1(struct_foo), int) -> void = "mac#"
fun struct_foo_ptr_get_p: (!aPtr1(struct_foo)) -> aPtr0(struct_bar) = "mac#"
fun struct_foo_ptr_set_p: (!aPtr1(struct_foo), !aPtr1(struct_bar)) -> void = "mac#"
fun struct_foo_ptr_get_pp: (!aPtr1(struct_foo)) -> aPtr0(aPtr0(struct_bar)) = "mac#"
fun struct_foo_ptr_set_pp: (!aPtr1(struct_foo), !aPtr1(aPtr1(struct_bar))) -> void = "mac#"
overload .x with struct_foo_ptr_get_x
overload .x with struct_foo_ptr_set_x
overload .p with struct_foo_ptr_get_p
overload .p with struct_foo_ptr_set_p
overload .pp with struct_foo_ptr_get_pp
overload .pp with struct_foo_ptr_set_pp

fun struct_bar_ptr_get_x: (!aPtr1(struct_bar)) -> int = "mac#"
fun struct_bar_ptr_set_x: (!aPtr1(struct_bar), int) -> void = "mac#"
fun struct_bar_ptr_get_p: (!aPtr1(struct_bar)) -> aPtr0(struct_foo) = "mac#"
fun struct_bar_ptr_set_p: (!aPtr1(struct_bar), !aPtr1(struct_foo)) -> void = "mac#"
overload .x with struct_bar_ptr_get_x
overload .x with struct_bar_ptr_set_x
overload .p with struct_bar_ptr_get_p
overload .p with struct_bar_ptr_set_p
