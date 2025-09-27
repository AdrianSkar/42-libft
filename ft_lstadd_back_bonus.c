#include "libft.h"

// Adds the element 'new' at the end of the list.
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*track;

	if (!*lst)
		*lst = new;
	else
	{
		track = ft_lstlast(*lst);
		track->next = new;
	}
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	t_list		*begin;
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	char		*str = strdup("lorem");
	char		*str2 = strdup("ipsum");
	char		*str3 = strdup("dolor");
	char		*str4 = strdup("sit");

	elem = ft_lstnew(str);
	elem2 = ft_lstnew(str2);
	elem3 = ft_lstnew(str3);
	elem4 = ft_lstnew(str4);

	begin = NULL;
	ft_lstadd_back(&begin, elem);
	ft_lstadd_back(&begin, elem2);
	ft_lstadd_back(&begin, elem3);
	ft_lstadd_back(&begin, elem4);
	while (begin)
	{
		printf("%s\n", begin->content);
		begin = begin->next;
	}

	return (0);
} */

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	t_list *list = ft_lstnew(strdup("1"));

	list->next = ft_lstnew(strdup("2"));
	list->next->next = ft_lstnew(strdup("3"));
	ft_lstadd_back(&list, ft_lstnew(strdup("4")));
	printf("last is: %s \n", ft_lstlast(list)->content);

	return (0);
} */
