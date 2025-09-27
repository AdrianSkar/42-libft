#include "libft.h"

/**
 * @brief Deletes and frees the memory of the given list element and every
 *  successor of that element, using the function `del` and free(3).
 *  Finally, the pointer to the list must be set to NULL.
 * @param lst The address of a pointer to an element.
 * @param del The address of the function used to delete the content of the
 *  element.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*first;
	t_list	*temp;

	if (!lst || !del)
		return ;
	first = *lst;
	while (first)
	{
		temp = first->next;
		ft_lstdelone(first, del);
		first = temp;
	}
	*lst = NULL;
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	t_list *list = ft_lstnew(strdup("1"));

	list->next = ft_lstnew(strdup("2"));
	list->next->next = ft_lstnew(strdup("3"));
	printf("list size is: %d \n", ft_lstsize(list));
	ft_lstclear(&list, free);
	printf("list size is: %d \n", ft_lstsize(list));

	return (0);
} */
