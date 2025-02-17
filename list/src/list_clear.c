
#include "list.h"

void	list_clear(t_list **head, void (*del)(void *))
{
	t_list	*node;

	while (*head != NULL)
	{
		node = *head;
		*head = node->next;
		list_delone(node, del);
	}
}
