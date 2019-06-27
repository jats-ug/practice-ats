#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

datatype list0f(a: t@ype, x: t@ype+) =
  | list0_consf of (a, x)
  | list0_nilf of ()

abstype functor_type(a: t@ype, x: t@ype+) = ptr

typedef functor(a: t@ype, x: t@ype+) = functor_type(a, x)

extern
fun {a:t@ype}{b:t@ype}{t:t@ype} map (a -<cloref1> b, functor(t,a)) : functor(t, b)

typedef algebra(a: t@ype, x: t@ype) = functor(a, x) -<cloref1> x
typedef coalgebra(a: t@ype, x: t@ype) = x -<cloref1> functor(a, x)

fun {b:t@ype}{a:t@ype}{t:t@ype} hylo(f : algebra(t, b), g : coalgebra(t, a), x : a) : b =
  f(map(lam x0 => hylo(f, g, x0), g(x)))

absimpl functor_type(a, x) = list0f(a, x)

implement {a}{b}{t} map (f, x) =
  case+ x of
    | list0_consf (x, xs) => list0_consf(x, f(xs))
    | list0_nilf() => list0_nilf

fn sum (x : intGte(0)) : int =
  let
    fn alg(xs : list0f(int, int)) : int =
      case+ xs of
        | list0_consf (x, xs) => x + xs
        | list0_nilf() => 0
    fn coalg(x : int) : list0f(int, int) =
      case+ x of
        | 0 => list0_nilf
        | x => list0_consf(x, x - 1)
  in
    hylo(lam x0 => alg(x0), lam x1 => coalg(x1), x)
  end

implement main0 () =
  println! (sum(2000000000))
