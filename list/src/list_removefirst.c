
#include "list.h"

void	list_removefirst(t_list **head, void (*del)(void *))
{
	t_list	*next_node;

	if (head != NULL && *head != NULL && del != NULL)
	{
		next_node = (*head)->next;
		list_delone(*head, del);
		*head = next_node;
	}
}
