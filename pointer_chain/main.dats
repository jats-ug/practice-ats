staload UN = "prelude/SATS/unsafe.sats"

%{^
#include "dentry.h"

typedef int (*s_op_statfs) (struct dentry *);

s_op_statfs
trace_dentry2statfs(struct dentry *dentry) {
	return dentry->d_sb->s_op->statfs;
}
%}

abst@ype dentry_t  = $extype"struct dentry"
typedef dentry_t_p = cPtr0(dentry_t)
typedef f_statfs = dentry_t_p -> int

extern fun get_dentry_p (): dentry_t_p = "mac#"
extern fun get_dentry_p_null (): dentry_t_p = "mac#"

fun{}
dentry2statfs (dentry: dentry_t_p, statfs: &f_statfs? >> opt (f_statfs, b)): #[b:bool] bool(b) = let
  extern fun trace_dentry2statfs (dentry_t_p): f_statfs = "mac#"
  val f = trace_dentry2statfs dentry
in
  if $UN.cast{ptr}(f) = the_null_ptr then let
      prval () = opt_none{f_statfs}(statfs)
    in
      false
    end
  else let
      val () = statfs := f
      prval () = opt_some{f_statfs}(statfs)
    in
      true
    end
end

implement main0 () = {
  var f: f_statfs?
  // Success to get function pointer
  val b = dentry2statfs (get_dentry_p (), f)
  val r = if b then let
                      prval () = opt_unsome (f)
                      val res = f (get_dentry_p ())
                      prval () = topize(f)
                    in
                      res
                    end
               else let prval () = opt_unnone (f) in 1 end
  val () = (print "r = "; print_int r; print "\n")
  // Fail to get function pointer
  val b = dentry2statfs (get_dentry_p_null (), f)
  val r = if b then let
                      prval () = opt_unsome (f)
                      val res = f (get_dentry_p_null ())
                      prval () = topize(f)
                    in
                      res
                    end
               else let prval () = opt_unnone (f) in 1 end
  val () = (print "r = "; print_int r; print "\n")
}
