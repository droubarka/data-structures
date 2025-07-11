
#include "bst.h"

t_bstnode	*bst_insert(t_bstnode *root, t_bstnode *node, int (*cmp)(void *, void*))
{
	t_bstnode	*curr_node;
	t_bstnode	*prev_node;

	if (root == NULL)
	{
		return (node);
	}
	curr_node = root;
	while (curr_node != NULL)
	{
		prev_node = curr_node;
		if (cmp(node->data, curr_node->data) < 0)
		{
			curr_node = curr_node->left;
		}
		else
		{
			curr_node = curr_node->right;
		}
	}
	if (cmp(node->data, prev_node->data) < 0)
	{
		prev_node->left = node;
	}
	else
	{
		prev_node->right = node;
	}
	return (root);
}
