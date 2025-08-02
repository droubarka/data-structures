
#include "stack.h"

t_stack	*stack_push(t_stack **stack, t_stack *node)
{
	t_stack	*last_node;

	if (*stack != NULL)
	{
		last_node = node;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = *stack;
	}
	*stack = node;
	return (node);
}
