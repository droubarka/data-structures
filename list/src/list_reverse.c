
#include "list.h"

void	list_reverse(t_list **head)
{
	t_list	*new_list;
	t_list	*next_node;

	if (head != NULL)
	{
		new_list = NULL;
		while (*head)
		{
			next_node = (*head)->next;
			list_addfront(&new_list, *head);
			*head = next_node;
		}
		*head = new_list;
	}
}
