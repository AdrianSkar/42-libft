#include "libft.h"

// Iterates the list 'lst' and returns its last element.
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*track;

	if (!lst)
		return (NULL);
	track = lst;
	while (track->next)
	{
		track = track->next;
	}
	return (track);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	t_list *list = ft_lstnew(strdup("1"));

	list->next = ft_lstnew(strdup("2"));
	list->next->next = ft_lstnew(strdup("3"));
	printf("last is: %s \n", ft_lstlast(list)->content);

	list->next->next->next = ft_lstnew(strdup("4"));
	printf("last is: %s \n", ft_lstlast(list)->content);

	return (0);
} */
