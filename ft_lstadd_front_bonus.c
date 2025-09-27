#include "libft.h"

// Adds the element 'new' at the beginning of the list.
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int main (void)
{
	t_list *list = ft_lstnew("original");
	t_list *new_node = ft_lstnew("new_node");
	ft_lstadd_front(&list, new_node);
	printf("list content is: %s \n", list->content);
	printf("list next content is: %s \n", list->next->content);
	return (0);
} */

// 17: add current head to new node next
// 18: set new node as head
