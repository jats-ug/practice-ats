# Sample code of ATS localized template

## What's localized template?

See following.

https://github.com/githwxi/ATS-Postiats/wiki/Design-patterns#localized-template-pattern

## What's "PMVtmpltcst"?

```
$ grep git@ ../.git/config
        url = git@github.com:jats-ug/practice-ats.git
$ pwd
/home/kiwamu/src/practice-ats/localized-template
$ grep PMVtmpltcst testtemp_dats_memo.c
ATSINSmove(tmpret0, PMVtmpltcst(g1int_add<S2Eextkind(atstype_int)>)(ATSPMVi0nt(0), ATSPMVi0nt(1))) ;
ATSINSmove(tmpret1, PMVtmpltcst(plus1<>)()) ;
ATSINSmove(tmpret8, PMVtmpltcst(g1int_add<S2Eextkind(atstype_int)>)(env0, ATSPMVi0nt(1))) ;
```

But they are disabled by #if(0)...

ATS2 compiler code says that the "PMVtmpltcst" is primitive value.

```ocaml
(* File: ATS-Postiats/src/pats_ccomp.sats *)
datatype
primdec_node =
  | PMDnone of () 
  | PMDlist of (primdeclst)
(* --snip-- *)
  | PMVlamfix of (int(*knd*), primval) // knd=0/1:lam/fix
  | PMVtmpltcst of (d2cst, t2mpmarglst) // for template constants
  | PMVtmpltvar of (d2var, t2mpmarglst) // for template variables
  | PMVtmpltcstmat of (d2cst, t2mpmarglst, tmpcstmat) // for matched template constants
  | PMVtmpltvarmat of (d2var, t2mpmarglst, tmpvarmat) // for matched template variables
  | PMVerr of ()
(* --snip-- *)
and primval =
'{
  primval_loc= location
, primval_type= hisexp
, primval_node= primval_node
} // end of [primval]
(* --snip-- *)
fun fprint_primval : fprint_type (primval)
```

```ocaml
(* File: ATS-Postiats/src/pats_ccomp_print.dats *)
implement
fprint_primval (out, x) = let
macdef prstr (s) = fprint_string (out, ,(s))
in
case+ x.primval_node of
| PMVtmp (tmp) =>
  {
    val () = prstr "PMVtmp("
    val () = fprint_tmpvar (out, tmp)
    val () = prstr ")"
  }
(* --snip-- *)
| PMVtmpltcst
    (d2c, t2mas) =>
  {
    val () = prstr "PMVtmpltcst("
    val () = fprint_d2cst (out, d2c)
    val () = prstr "<"
    val () = fpprint_t2mpmarglst (out, t2mas)
    val () = prstr ">"
    val () = prstr ")"
  }
```

## How to localize environment?

Localized template is called with enviroment as argument.

The "plus1" default implementation is compiled to following C code.

```ocaml
ATSstatic()
atstkind_t0ype(atstype_int)
_057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__plus1__0__1()
{
ATStmpdec(tmpret0__1, atstkind_t0ype(atstype_int)) ;
ATSfunbody_beg()
ATSINSflab(__patsflab_plus1):
ATSINSmove(tmpret0__1, atspre_g1int_add_int(ATSPMVi0nt(0), ATSPMVi0nt(1))) ;
ATSfunbody_end()
ATSreturn(tmpret0__1) ;
}
```

The above code is called from following variations of "call_plus1" function.

```ocaml
ATSstatic()
atstkind_t0ype(atstype_int)
_057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__call_plus1__1__1()
{
ATStmpdec(tmpret1__1, atstkind_t0ype(atstype_int)) ;
ATSfunbody_beg()
ATSINSflab(__patsflab_call_plus1):
ATSINSmove(tmpret1__1, _057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__plus1__0__1()) ;
ATSfunbody_end()
ATSreturn(tmpret1__1) ;
}
```

The "plus1" local implementation is compiled to following C code.

```ocaml
ATSstatic()
atstkind_t0ype(atstype_int)
_057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__plus1__6__1(atstkind_t0ype(atstype_int) env0)
{
ATStmpdec(tmpret8__1, atstkind_t0ype(atstype_int)) ;
ATSfunbody_beg()
ATSINSflab(__patsflab_plus1):
ATSINSmove(tmpret8__1, atspre_g1int_add_int(env0, ATSPMVi0nt(1))) ;
ATSfunbody_end()
ATSreturn(tmpret8__1) ;
}
```

The above code is called from following variations of "call_plus1" function with environment.

```ocaml
ATSstatic()
atstkind_t0ype(atstype_int)
_057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__call_plus1__1__2(atstkind_t0ype(atstype_int) env0)
{
ATStmpdec(tmpret1__2, atstkind_t0ype(atstype_int)) ;
ATSfunbody_beg()
ATSINSflab(__patsflab_call_plus1):
ATSINSmove(tmpret1__2, _057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__plus1__6__1(env0)) ;
ATSfunbody_end()
ATSreturn(tmpret1__2) ;
}
```
