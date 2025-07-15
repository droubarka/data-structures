
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
