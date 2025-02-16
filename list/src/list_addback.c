
#include "list.h"

void	list_addback(t_list **head, t_list *node)
{
	if (node == NULL && head != NULL)
	{
		return ;
	}
	if (*head != NULL)
	{
		list_last(*head)->next = node;
	}
	else
	{
		*head = node;
	}
}
