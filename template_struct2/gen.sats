%{#
#ifndef _STRUCT_GEN_H_
#define _STRUCT_GEN_H_
struct bar;
struct foo {
  int b;
  struct bar *p;
};
struct bar {
  int a;
  struct foo *p;
};
#endif /* _STRUCT_GEN_H_ */
%}

// Should be semi-automatically generated code
// pre define
%{#
#ifndef _STRUCT_GEN_AUTO_H_
#define _STRUCT_GEN_AUTO_H_
static inline struct bar *struct_foo_get_p(struct foo *p) { return p->p; }
static inline struct foo *struct_bar_get_p(struct bar *p) { return p->p; }
#endif /* _STRUCT_GEN_AUTO_H_ */
%}

absvtype struct_foo_ptr(l:addr) = ptr l
absvtype struct_bar_ptr(l:addr) = ptr l

// struct foo
typedef struct_foo = $extype_struct"struct foo" of {
  b = int,
  p = [l:addr] ptr l
}
castfn take_struct_foo_ptr: {l:agz} (!struct_foo @ l | ptr l) -> (struct_foo_ptr l -<lin,prf> void  | struct_foo_ptr l)
fun struct_foo_get_p: {l1:agz} (!struct_foo_ptr(l1)) -> [l2:addr] struct_bar_ptr l2 = "mac#"

// struct bar
typedef struct_bar = $extype_struct"struct bar" of {
  a = int,
  p = [l:addr] ptr l
}
castfn take_struct_bar_ptr: {l:agz} (!struct_bar @ l | ptr l) -> (struct_bar_ptr l -<lin,prf> void  | struct_bar_ptr l)
fun struct_bar_get_p: {l1:agz} (!struct_bar_ptr(l1)) -> [l2:addr] struct_foo_ptr l2 = "mac#"
