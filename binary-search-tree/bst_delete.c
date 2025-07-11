
#include "bst.h"

t_bstnode	*bst_delete(t_bstnode *root, void *data, int (*cmp)(void *, void *), void (*del)(void *))
{
	t_bstnode	*prev_node;
	t_bstnode	*curr_node;
	t_bstnode	*next_node;
	t_bstnode	*psuc_node;
	t_bstnode	*succ_node;

	prev_node = NULL;
	curr_node = root;
	while (curr_node != NULL && curr_node->data != data)
	{
		prev_node = curr_node;
		if (cmp(data, curr_node->data) < 0)
		{
			curr_node = curr_node->left;
		}
		else
		{
			curr_node = curr_node->right;
		}
	}

	if (curr_node == NULL)
	{
		return (root);
	}

	else if (curr_node->left == NULL || curr_node->right == NULL)
	{
		if (curr_node->left == NULL)
		{
			next_node = curr_node->right;
		}
		else
		{
			next_node = curr_node->left;
		}

		if (prev_node == NULL)
		{
			del(curr_node->data);
			free(curr_node);
			return (next_node);
		}

		if (prev_node->left == curr_node)
		{
			prev_node->left = next_node;
		}
		else
		{
			prev_node->right = next_node;
		}
	}

	else
	{
		psuc_node = NULL;
		succ_node = curr_node->right;
		while (succ_node->left != NULL)
		{
			psuc_node = succ_node;
			succ_node = succ_node->left;
		}

		if (psuc_node != NULL)
		{
			psuc_node->left = succ_node->right;
			succ_node->right = curr_node->right;
		}
		succ_node->left = curr_node->left;

		if (prev_node == NULL)
		{
			del(curr_node->data);
			free(curr_node);
			return (succ_node);
		}

		if (prev_node->left == curr_node)
		{
			prev_node->left = succ_node;
		}
		else
		{
			prev_node->right = succ_node;
		}
	}

	del(curr_node->data);
	free(curr_node);

	return (root);
}
