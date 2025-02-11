
#ifndef LIST_H
#define LIST_H

# include <stdlib.h>
# include <stddef.h>

typedef struct s_list	t_list;

struct s_list
{
	void	*content;
	t_list	*next;
};

t_list	*list_new(void *content);
size_t	list_size(t_list *head);
t_list	*list_last(t_list *head);
void	list_iter(t_list *head, void (*fn)(void *));

#endif
