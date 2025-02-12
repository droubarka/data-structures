
#include "list.h"

void	list_removelast(t_list **head, void (*del)(void *))
{
	t_list	*node;

	if (head != NULL && *head != NULL && del != NULL)
	{
		node = *head;

		if (node->next == NULL)
		{
			list_delone(*head, del);
			*head = NULL;
			return ;
		}

		while (node->next->next != NULL)
		{
			node = node->next;
		}
		list_delone(node->next, del);
		node->next = NULL;
	}
}
