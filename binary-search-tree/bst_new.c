
#include "bst.h"

t_bstnode	*bst_new(void *data)
{
	t_bstnode	*bstnode;

	bstnode = malloc(sizeof(t_bstnode));
	if (bstnode != NULL)
	{
		bstnode->data = data;
		bstnode->left = NULL;
		bstnode->right = NULL;
	}
	return (bstnode);
}
