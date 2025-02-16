
#include "list.h"

t_list	*list_nth(t_list *head, size_t index)
{
	while (head != NULL && index--)
	{
		head = head->next;
	}
	return (head);
}
