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
static inline struct bar *take_struct_foo_p(struct foo *p) { return p->p; }
static inline struct foo *take_struct_bar_p(struct bar *p) { return p->p; }
#endif /* _STRUCT_GEN_AUTO_H_ */
%}

absvtype struct_foo_ptr(l:addr) = ptr l
absvtype struct_bar_ptr(l:addr) = ptr l

// struct foo/bar
typedef struct_foo = $extype_struct"struct foo" of {
  b = int,
  p = [l:addr] ptr l
}
typedef struct_bar = $extype_struct"struct bar" of {
  a = int,
  p = [l:addr] ptr l
}

// access
fun take_struct_foo_p: {l1:agz} (!struct_foo @ l1 | ptr l1) -> [l2:addr] (struct_bar @ l2, struct_bar @ l2 -<lin,prf> void | ptr l2) = "mac#"
fun take_struct_bar_p: {l1:agz} (!struct_bar @ l1 | ptr l1) -> [l2:addr] (struct_foo @ l2, struct_foo @ l2 -<lin,prf> void | ptr l2) = "mac#"