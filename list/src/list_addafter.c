
#include "list.h"

void	list_addafter(t_list *node, t_list *new_node)
{
	list_last(new_node)->next = node->next;
	node->next = new_node;
}
