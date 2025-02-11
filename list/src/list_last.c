
#include "list.h"

t_list	*list_last(t_list *head)
{
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			head = head->next;
		}
	}
	return (head);
}
