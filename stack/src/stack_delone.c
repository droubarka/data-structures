
#include "stack.h"

void	stack_delone(t_stack **stack, t_stack *node, int (*cmp)(void *, void *), void (*del)(void *))
{
	t_stack	*curr_node;
	t_stack	*target_node;

	if (!cmp((*stack)->data, node->data))
	{
		target_node = *stack;
		*stack = target_node->next;
		del(target_node->data);
		free(target_node);
		return ;
	}
	curr_node = *stack;
	while (curr_node != NULL && curr_node->next != NULL)
	{
		if (!cmp(curr_node->next->data, node->data))
		{
			target_node = curr_node->next;
			curr_node->next = target_node->next;
			del(target_node->data);
			free(target_node);
			return ;
		}
		curr_node = curr_node->next;
	}
}
