%{#
#ifndef _STRUCT_GEN_H_
#define _STRUCT_GEN_H_
struct bar;
struct foo {
  int b;
  struct bar *p;
  int **pi;
};
struct bar {
  int a;
  struct foo *p;
};
#endif /* _STRUCT_GEN_H_ */
%}

// Should be semi-automatically generated code
// Primitives
castfn takeout_ptrptr: {l1:agz} (ptr(l1)) -> [l2:addr] (ptr(l2)@l1 | ptr(l1))
castfn addback_ptrptr: {l1:agz}{l2:addr} (ptr(l2)@l1 | ptr(l1)) -> void
castfn takeout_ptrint: {l1:agz} (ptr(l1)) -> (int@l1 | ptr(l1))
castfn addback_ptrint: {l1:agz} (int@l1 | ptr(l1)) -> void

// struct foo
absvtype struct_foo_ptr(l:addr) = ptr(l)
typedef struct_foo = $extype_struct"struct foo" of {
  b = int,
  p = [l:addr] ptr(l), // struct bar *p
  pi = [l:addr] ptr(l) // int **pi
}
castfn takeout_struct_foo_ptr: {l:agz} (ptr(l)) -> struct_foo_ptr(l)
castfn addback_struct_foo_ptr: {l:agz} (struct_foo_ptr(l)) -> void
castfn takeout_struct_foo: {l:agz} (!struct_foo_ptr(l)) -> (struct_foo@l, struct_foo@l -<lin,prf> void | ptr(l))

// struct foo#b
fun{} struct_foo_get_b: {l:agz} (!struct_foo_ptr(l)) -> int
fun{} struct_foo_set_b: {l:agz} (!struct_foo_ptr(l), int) -> void
overload .b with struct_foo_get_b
overload .b with struct_foo_set_b

// struct foo#p
fun{} struct_foo_get_p: {l1:agz} (!struct_foo_ptr(l1)) -> [l2:addr] ptr(l2)
fun{} struct_foo_set_p: {l1,l2:agz} (!struct_foo_ptr(l1), ptr(l2)) -> void
overload .p with struct_foo_get_p
overload .p with struct_foo_set_p

// struct foo#pi
fun{} struct_foo_get_pi: {l1:agz} (!struct_foo_ptr(l1)) -> [l2:addr] ptr(l2)
fun{} struct_foo_set_pi: {l1,l2:agz} (!struct_foo_ptr(l1), ptr(l2)) -> void
overload .pi with struct_foo_get_pi
overload .pi with struct_foo_set_pi

// struct bar
absvtype struct_bar_ptr(l:addr) = ptr(l)
typedef struct_bar = $extype_struct"struct bar" of {
  a = int,
  p = [l:addr] ptr(l) // struct foo *p
}
castfn takeout_struct_bar_ptr: {l1:agz} (ptr(l1)) -> struct_bar_ptr(l1)
castfn addback_struct_bar_ptr: {l1:agz} (struct_bar_ptr(l1)) -> void
castfn takeout_struct_bar: {l1:agz} (!struct_bar_ptr(l1)) -> (struct_bar@l1 | ptr(l1))
castfn addback_struct_bar: {l1:agz} (struct_bar@l1 | ptr(l1)) -> void

// struct bar#a
fun{} struct_bar_get_a: {l1:agz} (!struct_bar_ptr(l1)) -> int
fun{} struct_bar_set_a: {l1:agz} (!struct_bar_ptr(l1), int) -> void
overload .a with struct_bar_get_a
overload .a with struct_bar_set_a

// struct bar#p
fun{} struct_bar_get_p: {l1:agz} (!struct_bar_ptr(l1)) -> [l2:addr] ptr(l2)
fun{} struct_bar_set_p: {l1,l2:agz} (!struct_bar_ptr(l1), ptr(l2)) -> void
overload .p with struct_bar_get_p
overload .p with struct_bar_set_p
