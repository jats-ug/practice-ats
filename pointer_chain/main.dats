%{^
#include <stdio.h>

struct dentry;

struct super_operations {
  int (*statfs) (struct dentry *);
};

struct super_block {
  const struct super_operations *s_op;
};

struct dentry {
  struct super_block *d_sb;
};

int
simple_statfs(struct dentry *dentry) {
  printf("simple_statfs(%p) called\n", dentry);
  return 0;
}

static const struct super_operations g_s_ops = {
  .statfs = simple_statfs,
};

static struct super_block g_sb = {
  .s_op = &g_s_ops,
};

static struct dentry g_de = {
  .d_sb = &g_sb,
};

struct dentry *
get_dentry_p() {
  return &g_de;
}

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
