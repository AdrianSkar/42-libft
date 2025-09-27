#include "libft.h"

/**
 * @brief Frees the memory of a list element's `lst` content using a specified
 *  delete function `del`, then frees the element itself. The memory of the
 *  'next' element is not freed.
 * @param lst The element to free.
 * @param del The function used to delete the content of the element.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	t_list *list = ft_lstnew(strdup("1"));

	list->next = ft_lstnew(strdup("2"));
	printf("list next content is: %s \n", list->next->content);
	ft_lstdelone(list->next, free);
	printf("list content is: %s \n", list->content);
	printf("list next content is: %s \n", list->next->content);

	return (0);
} */
