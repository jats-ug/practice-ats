%{^
#include "dentry.h"

typedef int (*s_op_statfs) (struct dentry *);

s_op_statfs
dentry2s_op_statfs(struct dentry *dentry) {
	return dentry->d_sb->s_op->statfs;
}
%}

abst@ype dentry_t  = $extype"struct dentry"
typedef dentry_t_p = cPtr0(dentry_t)

extern fun get_dentry_p (): dentry_t_p = "mac#"
extern fun dentry2s_op_statfs (dentry_t_p): (dentry_t_p -> int) = "mac#"

implement main0 () = {
  val de = get_dentry_p ()
  val f = dentry2s_op_statfs de
  val _ = f de
}
