
#include "list.h"

void	list_iter(t_list *head, void (*fn)(void *))
{
	if (fn != NULL)
	{
		while (head != NULL)
		{
			fn(head->content);
			head = head->next;
		}
	}
}
