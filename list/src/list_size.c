
#include "list.h"

size_t	list_size(t_list *head)
{
	size_t	size;

	size = 0;
	while (head != NULL)
	{
		size++;
		head = head->next;
	}
	return (size);
}
