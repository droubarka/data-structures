
#include "list.h"

void	list_addfront(t_list **head, t_list *node)
{
	if (*head != NULL)
	{
		list_last(node)->next = *head;
	}
	*head = node;
}
