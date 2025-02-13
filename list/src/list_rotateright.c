
#include "list.h"

void	list_rotateright(t_list **head)
{
	t_list	*first_node;
	t_list	*prev_node;
	t_list	*last_node;

	if (head != NULL && *head != NULL && (*head)->next != NULL)
	{
		first_node = *head;
		last_node = *head;

		while (last_node->next)
		{
			prev_node = last_node;
			last_node = last_node->next;
		}

		*head = last_node;
		last_node->next = first_node;
		prev_node->next = NULL;
	}
}
