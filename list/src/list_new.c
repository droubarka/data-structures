
#include "list.h"

t_list	*list_new(void *content)
{
	t_list	*new_node;

	new_node = (t_list *) malloc(sizeof(t_list));
	if (new_node != NULL)
	{
		new_node->content = content;
		new_node->next = NULL;
	}
	return (new_node);
}
