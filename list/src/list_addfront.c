
#include "list.h"

void	list_addfront(t_list **head, t_list *node)
{
	if (head != NULL && node != NULL)
	{
		if (*head != NULL)
		{
			node->next = *head;
		}
		*head = node;
	}
}
