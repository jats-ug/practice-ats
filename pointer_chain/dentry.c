#include <stdio.h>
#include "dentry.h"

static const struct super_operations g_s_ops = {
	.statfs = simple_statfs,
};
static struct super_block g_sb = {
	.s_op = &g_s_ops,
};
static struct dentry g_de = {
	.d_sb = &g_sb,
};

static const struct super_operations g_s_ops_null = {
	.statfs = NULL,
};
static struct super_block g_sb_null = {
	.s_op = &g_s_ops_null,
};
static struct dentry g_de_null = {
	.d_sb = &g_sb_null,
};

int
simple_statfs(struct dentry *dentry) {
	printf("simple_statfs(%p) called\n", dentry);
	return 0;
}

struct dentry *
get_dentry_p(void) {
	return &g_de;
}

struct dentry *
get_dentry_p_null(void) {
	return &g_de_null;
}
