
#include "list.h"

void	list_rotateleft(t_list **head)
{
	t_list	*first_node;
	t_list	*last_node;

	if (head != NULL && *head != NULL && (*head)->next != NULL)
	{
		first_node = *head;
		last_node = list_last(first_node->next);

		*head = first_node->next;
		first_node->next = NULL;
		last_node->next = first_node;
	}
}
