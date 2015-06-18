#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload "libats/SATS/ilist_prf.sats"
staload "libats/SATS/gflist.sats"
staload _ = "libats/DATS/gflist.dats"

extern fun{a:t@ype}
gflist_append_length
  {xs1,xs2:ilist}{n1,n2:int}
  (pf1: LENGTH (xs1, n1), pf2: LENGTH (xs2, n2) | xs1: gflist (a, xs1), xs2: gflist (a, xs2)):
  [res:ilist] (LENGTH (res, n1+n2), APPEND (xs1, xs2, res) | gflist (a, res))

implement{a}
gflist_append_length (pf1, pf2 | xs1, xs2) = let
  val (pf_append | xs) = gflist_append (xs1, xs2)
  prval pf_len = lemma_append_length (pf_append, pf1, pf2)
in
  (pf_len, pf_append | xs)
end

implement main0 () = {
  val l1 = $list{int}(1, 2, 3)
  val (pf1 | xs1) = list2gflist l1
  val l2 = $list{int}(4, 3, 2, 1)
  val (pf2 | xs2) = list2gflist l2
  val (pf_len, pf_append | xs3) = gflist_append_length (pf1, pf2 | xs1, xs2)
  val (pf3 | l3) = gflist2list xs3
  val () = print_list<int> l3
}
