#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		ctr;
	t_list	*track;

	if (lst == NULL)
		return (0);
	ctr = 1;
	track = lst;
	while (track->next)
	{
		track = track->next;
		ctr++;
	}
	return (ctr);
}

/*
#include <stdio.h>
#include <string.h>

int main (void)
{
	t_list *list = ft_lstnew(strdup("1"));
	list->next = ft_lstnew(strdup("2"));
	printf("list size is: %d \n", ft_lstsize(list));
	// new node
	list->next->next = ft_lstnew(strdup("3"));
	printf("list size is: %d \n", ft_lstsize(list));
	return (0);
}  */
