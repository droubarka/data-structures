
#ifndef LIST_H
#define LIST_H

# include <stdlib.h>

typedef struct s_list	t_list;

struct s_list
{
	void	*content;
	t_list	*next;
};

t_list	*list_new(void *content);

#endif
