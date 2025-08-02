
#include "stack.h"

t_stack	*stack_new(void *data)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (stack != NULL)
	{
		stack->data = data;
		stack->next = NULL;
	}
	return (stack);
}
