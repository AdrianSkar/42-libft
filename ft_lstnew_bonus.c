#include "libft.h"

/**
 * @brief `ft_lstnew` allocates a new node with the content `content`.
 * @param content The content of the new node.
 * @return The new node or `NULL` if the allocation fails.
 * @note The `next` pointer of the new node is initialized to `NULL`.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*s_new_node;

	s_new_node = malloc(sizeof(t_list));
	if (!s_new_node)
		return (NULL);
	s_new_node->content = content;
	s_new_node->next = NULL;
	return (s_new_node);
}
/*
#include <stdio.h>

int main(void){
	char data[4] = "ase";
	t_list *new_node = ft_lstnew(data);
	printf("content is: %s \n", new_node->content);

	free(new_node);
	return(0);
} */

/* typedef struct s_list
{
void 					*content;
struct s_list *next;
} t_list; */
