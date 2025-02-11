
#include "list.h"

void	list_delone(t_list *node, void (*del)(void *))
{
	if (node != NULL && del != NULL)
	{
		del(node->content);
		free(node);
	}
}
