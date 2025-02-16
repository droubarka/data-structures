
#include "list.h"

void	list_delone(t_list *node, void (*del)(void *))
{
	del(node->content);
	free(node);
}
