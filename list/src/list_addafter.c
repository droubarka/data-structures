
#include "list.h"

void	list_addafter(t_list *node, t_list *head)
{
	if (node != NULL && head != NULL)
	{
		list_last(head)->next = node->next;
		node->next = head;
	}
}
