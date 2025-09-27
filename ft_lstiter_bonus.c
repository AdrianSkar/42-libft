#include "libft.h"

/**
 * @brief Iterates 'lst' and applies 'f' to the content of each node.
 * @param lst A pointer to a node.
 * @param f The address of a pointer to a function used in the iteration of
 *  each element of the list.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*track;

	if (!lst || !f)
		return ;
	track = lst;
	while (track)
	{
		f(track->content);
		track = track->next;
	}
	return ;
}
/*
#include <stdio.h>
#include <string.h>
void ft_strupcase(void *str)
{
	char *s = (char *)str;
	int i = 0;

	while (s[i])
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
		}
		i++;
	}
}

int main(void)
{
	t_list *list = ft_lstnew(strdup("a"));
	list->next = ft_lstnew(strdup("b"));
	list->next->next = ft_lstnew(strdup("c"));

	ft_lstiter(list, ft_strupcase);
	printf("a is: %s \n", list->content);
	printf("b is: %s \n", list->next->content);
	printf("c is: %s \n", list->next->next->content);
	return (0);
} */
