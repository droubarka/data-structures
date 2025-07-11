
#include "bst.h"

t_bstnode	*bst_search(t_bstnode *root, void *data, int (*cmp)(void *, void *))
{
	t_bstnode	*node;

	node = root;
	while (node != NULL)
	{
		if (node->data == data)
		{
			return (node);
		}
		if (cmp(data, node->data) < 0)
		{
			node = node->left;
		}
		else
		{
			node = node->right;
		}
	}
	return (NULL);
}
