// Should be semi-automatically generated code
staload "gen.sats"

// struct foo#b
implement{} struct_foo_get_b (x) = ret where {
  val (pf, fpf | p) = takeout_struct_foo (x)
  val ret = p->b
  prval () = fpf pf
}
implement{} struct_foo_set_b (x, v) = {
  val (pf, fpf | p) = takeout_struct_foo (x)
  val () = p->b := v
  prval () = fpf pf
}

// struct foo#p
implement{} struct_foo_get_p (x) = ret where {
  val (pf, fpf | p) = takeout_struct_foo (x)
  val ret = p->p
  prval () = fpf pf
}
implement{} struct_foo_set_p (x, v) = {
  val (pf, fpf | p) = takeout_struct_foo (x)
  val () = p->p := v
  prval () = fpf pf
}

// struct foo#p
implement{} struct_foo_get_pi (x) = ret where {
  val (pf, fpf | p) = takeout_struct_foo (x)
  val ret = p->pi
  prval () = fpf pf
}
implement{} struct_foo_set_pi (x, v) = {
  val (pf, fpf | p) = takeout_struct_foo (x)
  val () = p->pi := v
  prval () = fpf pf
}

// struct bar#a
implement{} struct_bar_get_a (x) = ret where {
  val (pf | p) = takeout_struct_bar (x)
  val ret = p->a
  val () = addback_struct_bar (pf | p)
}
implement{} struct_bar_set_a (x, v) = {
  val (pf | p) = takeout_struct_bar (x)
  val () = p->a := v
  val () = addback_struct_bar (pf | p)
}

// struct bar#p
implement{} struct_bar_get_p (x) = ret where {
  val (pf | p) = takeout_struct_bar (x)
  val ret = p->p
  val () = addback_struct_bar (pf | p)
}
implement{} struct_bar_set_p (x, v) = {
  val (pf | p) = takeout_struct_bar (x)
  val () = p->p := v
  val () = addback_struct_bar (pf | p)
}
