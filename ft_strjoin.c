#include "libft.h"

/**
 * @brief Allocates (with malloc(3)) and returns a new string, which is the
 *  result of the concatenation of `s1` and `s2`.
 * @param s1 The prefix string
 * @param s2 The suffix string
 * @return The new string or `NULL` if the allocation fails.
 *
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		total_len;
	char		*res;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	total_len = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(total_len + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, ft_strlen(s1) + 1);
	ft_strlcat(res, s2, total_len + 1);
	return (res);
}
/*
#include <stdio.h>
#include <string.h>
int main(void){
	char *test = "ghjk";
	char *test2 = "";

	printf("Result str: %s \n", ft_strjoin(test, test2));
	// test to handle inputs with NULL
	printf("Result str: %s \n", ft_strjoin(test, NULL));

	return (0);
} */
