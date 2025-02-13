
#include "list_insert.h"

void	list_insertback(t_list **head, t_list *node)
{
	if (head != NULL && node != NULL)
	{
		if (*head != NULL)
		{
			list_last(*head)->next = node;
		}
		else
		{
			*head = node;
		}
		node->next = NULL;
	}
}
