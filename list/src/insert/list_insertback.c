
#include "list_insert.h"

void	list_insertback(t_list **head, t_list *node)
{
	if (head != NULL && node != NULL)
	{
		list_addback(head, node);
		node->next = NULL;
	}
}
