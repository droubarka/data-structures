
#include "list.h"

void	list_addafter(t_list *node, t_list *new_node)
{
	if (node != NULL && new_node != NULL)
	{
		new_node->next = node->next;
		node->next = new_node;
	}
}
