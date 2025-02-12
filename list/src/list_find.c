
#include "list.h"

t_list	*list_find(t_list *head, void *value, int (*cmp)(void *, void *))
{
	if (cmp != NULL)
	{
		while (head)
		{
			if (cmp(head->content, value) == 0)
			{
				return (head);
			}
			head = head->next;
		}
	}
	return (NULL);
}
