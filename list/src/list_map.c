
#include "list.h"

t_list	*list_map(t_list *head, void *(*fn)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*last_node;
	void	*content;

	if (fn == NULL || del == NULL)
		return (NULL);

	new_list = NULL;
	while (head)
	{
		content = fn(head->content);
		if (content == NULL)
		{
			list_clear(&new_list, del);
			break ;
		}
		new_node = list_new(content);
		if (new_node == NULL)
		{
			del(content);
			list_clear(&new_list, del);
			break ;
		}
		if (new_list != NULL)
		{
			list_insertafter(last_node, new_node);
		}
		else
		{
			new_list = new_node;
		}
		last_node = new_node;
		head = head->next;
	}
	return (new_list);
}
