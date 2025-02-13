
#include "list_insert.h"

void	list_insertafter(t_list *node, t_list *new_node)
{
	if (node != NULL && new_node != NULL)
	{
		new_node->next = node->next;
		node->next = new_node;
	}
}
