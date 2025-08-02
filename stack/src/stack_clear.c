
#include "stack.h"

void	stack_clear(t_stack **stack, void (*del)(void *))
{
	t_stack	*node;

	while (*stack != NULL)
	{
		node = *stack;
		*stack = node->next;
		del(node->data);
		free(node);
	}
}
