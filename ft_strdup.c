#include "libft.h"

/**
 * @brief Allocates memory and copies a string
 * @param s The string to copy
 * @return The new string or `NULL` if allocation fails
 */
char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*new_st;

	s_len = ft_strlen(s) + 1;
	new_st = malloc(s_len);
	if (!new_st)
		return (NULL);
	ft_strlcpy(new_st, s, s_len);
	return (new_st);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *test = "Hello, World!";

	printf("   strdup: %s. Prt: %p \n", strdup(test), strdup(test));
	printf("ft_strdup: %s. Prt: %p \n", ft_strdup(test), ft_strdup(test));

	return (0);
} */
