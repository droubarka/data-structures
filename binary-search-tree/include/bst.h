
#ifndef BST_H
#define BST_H

#include <stdlib.h>

typedef struct s_bstnode	t_bstnode;

struct s_bstnode
{
	void		*data;
	t_bstnode	*left;
	t_bstnode	*right;
};

t_bstnode	*bst_new(void *data);
t_bstnode	*bst_insert(t_bstnode *root, t_bstnode *node, int (*cmp)(void *, void *));
t_bstnode	*bst_search(t_bstnode *root, void *data, int (*cmp)(void *, void *));
t_bstnode	*bst_delete(t_bstnode *root, void *data, int (*cmp)(void *, void *), void (*del)(void *));

#endif
