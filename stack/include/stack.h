
#ifndef STACK_H
#define STACK_H

#include <stdlib.h>

typedef struct s_stack	t_stack;

struct s_stack
{
	void	*data;
	t_stack	*next;
};

void	stack_clear(t_stack **stack, void (*del)(void *));
void	stack_delone(t_stack **stack, t_stack *node, int (*cmp)(void *, void *), void (*del)(void *));

t_stack	*stack_new(void *data);
t_stack	*stack_pop(t_stack **stack);
t_stack	*stack_push(t_stack **stack, t_stack *node);

#endif
