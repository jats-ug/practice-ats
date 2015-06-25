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

int simple_statfs(struct dentry *dentry);
struct dentry *get_dentry_p(void);
