
#include "stack.h"

t_stack	*stack_pop(t_stack **stack)
{
	t_stack	*node;

	node = *stack;
	if (node != NULL)
	{
		*stack = node->next;
		node->next = NULL;
	}
	return (node);
}
