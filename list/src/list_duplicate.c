
#include "list.h"

t_list	*list_duplicate(t_list *head, void *(*dup)(void *), void (*del)(void *))
{
	t_list	*new_list;

	new_list = list_map(head, dup, del);
	return (new_list);
}
