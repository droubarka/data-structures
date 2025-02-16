
#include "list.h"

t_list	*list_find(t_list *head, void *value, int (*cmp)(void *, void *))
{
	while (head != NULL)
	{
		if (cmp(head->content, value) == 0)
		{
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}
