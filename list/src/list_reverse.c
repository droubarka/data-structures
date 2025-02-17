
#include "list.h"

void	list_reverse(t_list **head)
{
	t_list	*new_list;
	t_list	*node;

	new_list = NULL;
	while (*head != NULL)
	{
		node = *head;
		*head = node->next;
		node->next = new_list;
		new_list = node;
	}
	*head = new_list;
}
