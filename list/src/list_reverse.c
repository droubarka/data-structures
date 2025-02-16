
#include "list.h"

void	list_reverse(t_list **head)
{
	t_list	*new_list;
	t_list	*next_node;

	new_list = NULL;
	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = new_list;
		new_list = *head;
		*head = next_node;
	}
	*head = new_list;
}
