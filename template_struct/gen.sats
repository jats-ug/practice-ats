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
absvtype struct_foo_ptr(l:addr) = ptr(l)
absvtype struct_bar_ptr(l:addr) = ptr(l)
typedef struct_foo = $extype_struct"struct foo" of {
  b = int,
  p = [l:addr] ptr(l)
}
typedef struct_bar = $extype_struct"struct bar" of {
  a = int,
  p = [l:addr] ptr(l)
}
castfn takeout_struct_foo_ptr {l:agz} (p: ptr(l)): struct_foo_ptr(l)
castfn addback_struct_foo_ptr {l:agz} (x: struct_foo_ptr(l)): void
castfn takeout_struct_foo {l:agz} (p: !struct_foo_ptr(l)): (struct_foo@l | ptr(l))
castfn addback_struct_foo {l:agz} (pf: struct_foo@l | addr: ptr(l)): void
castfn takeout_struct_bar_ptr {l:agz} (p: ptr(l)): struct_bar_ptr(l)
castfn addback_struct_bar_ptr {l:agz} (x: struct_bar_ptr(l)): void
castfn takeout_struct_bar {l:agz} (p: !struct_bar_ptr(l)): (struct_bar@l | ptr(l))
castfn addback_struct_bar {l:agz} (pf: struct_bar@l | addr: ptr(l)): void

// struct foo#b
fun{} struct_foo_get_b {l:agz} (x: !struct_foo_ptr(l)): int
fun{} struct_foo_set_b {l:agz} (x: !struct_foo_ptr(l), v: int): void
overload .b with struct_foo_get_b
overload .b with struct_foo_set_b

// struct foo#p
fun{} struct_foo_get_p {l1:agz} (x: !struct_foo_ptr(l1)): [l2:addr] ptr(l2)
fun{} struct_foo_set_p {l1,l2:agz} (x: !struct_foo_ptr(l1), v: ptr(l2)): void
overload .p with struct_foo_get_p
overload .p with struct_foo_set_p

// struct bar#a
fun{} struct_bar_get_a {l:agz} (x: !struct_bar_ptr(l)): int
fun{} struct_bar_set_a {l:agz} (x: !struct_bar_ptr(l), v: int): void
overload .a with struct_bar_get_a
overload .a with struct_bar_set_a

// struct bar#p
fun{} struct_bar_get_p {l1:agz} (x: !struct_bar_ptr(l1)): [l2:addr] ptr(l2)
fun{} struct_bar_set_p {l1,l2:agz} (x: !struct_bar_ptr(l1), v: ptr(l2)): void
overload .p with struct_bar_get_p
overload .p with struct_bar_set_p
