#include "libft.h"

/**
 * @brief Iterates 'lst' and applies 'f' to the content of each node.
 * 	Creates a list resulting from the successive application of the
 * 	function 'f' to each node. 'del' is used to delete the content of a node,
 * 	if necessary.
 * @param lst A pointer to a node.
 * @param f The address of a pointer to a function used in the iteration of
 *  each element of the list.
 * @param del A pointer to a function used to delete the content of a node,
 *  if necessary.
 * @return t_list* The new list. NULL if the allocation fails.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
				void (*del)(void *))
{
	t_list	*res_list;
	t_list	*track;
	void	*content;

	if (!lst || !f)
		return (NULL);
	res_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		track = ft_lstnew(content);
		if (!track)
		{
			del(content);
			ft_lstclear(&res_list, del);
			return (NULL);
		}
		ft_lstadd_back(&res_list, track);
		track = track->next;
		lst = lst->next;
	}
	return (res_list);
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void *ft_strupcase(void *str)
{ // test uppercase (allocating to avoid modifying the original string)
	char *s = (char *)str;
	int i = 0;
	char *new_str = malloc(strlen(s) + 1);
	if (!new_str)
		return NULL;
	while (s[i])
	{
		new_str[i] = ft_toupper(s[i]);
		i++;
	}
	new_str[i] = '\0';
	return new_str;
}

int main(void)
{ // original list
	t_list *list = ft_lstnew(strdup("a"));
	list->next = ft_lstnew(strdup("b"));
	list->next->next = ft_lstnew(strdup("c"));
	// new list
	t_list *new_list = ft_lstmap(list, &ft_strupcase, free);

	while (list)
	{
		printf("%s\n", list->content);
		list = list->next;
	}
	while (new_list)
	{
		printf("%s\n", new_list->content);
		new_list = new_list->next;
	}
	return (0);
}
*/
// 22: check input
// 24: init new list
// 26: track it
// 27: *content var (to be able to free it if necessary)
// 28: create and check new node
// 35: add new node
// 36: advace both
