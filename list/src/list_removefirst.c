
#include "list.h"

void	list_removefirst(t_list **head, void (*del)(void *))
{
	t_list	*node;

	if (*head != NULL)
	{
		node = *head;
		*head = node->next;
		list_delone(node, del);
	}
}
