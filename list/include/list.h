
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

size_t	list_size(t_list *head);

void	list_addafter(t_list *node, t_list *new_node);
void	list_addback(t_list **head, t_list *node);
void	list_addfront(t_list **head, t_list *node);
void	list_clear(t_list **head, void (*del)(void *));
void	list_delone(t_list *node, void (*del)(void *));
void	list_iter(t_list *head, void (*fn)(void *));
void	list_removefirst(t_list **head, void (*del)(void *));
void	list_removelast(t_list **head, void (*del)(void *));
void	list_reverse(t_list **head);
void	list_rotateleft(t_list **head);
void	list_rotateright(t_list **head);

t_list	*list_duplicate(t_list *head, void *(*dup)(void *), void (*del)(void *));
t_list	*list_find(t_list *head, void *value, int (*cmp)(void *, void *));
t_list	*list_last(t_list *head);
t_list	*list_map(t_list *head, void *(*fn)(void *), void (*del)(void *));
t_list	*list_new(void *content);

#endif
