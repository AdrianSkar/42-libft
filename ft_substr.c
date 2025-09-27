#include "libft.h"

/**
 * @brief Allocates (with malloc(3)) and returns a substring from the string
 *  `s`. The substring begins at index `start` and is of maximum size `len`.
 * @param s The string from which to create the substring.
 * @param start The start index of the substring in the string `s`.
 * @param len The maximum length of the substring.
 * @return The substring. NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	size_t			s_len;

	s_len = ft_strlen(s);
	if (s_len < start)
		return (ft_strdup(""));
	if (s_len - start < len)
		len = s_len - start;
	res = malloc(len + 1);
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, &s[start], len + 1);
	return (res);
}

/*
#include <stdio.h>
#include <string.h>
int main(void){
	char *test = "Hi there!";
	unsigned int start = 0;
	size_t len = 8;

	char *res = ft_substr(test, start, len);
	printf("Result str: %s \n", res);
	free(res);
	res = NULL;

	res = ft_substr("the", 0, 3);
	printf("Result str: %s \n", res);
	free(res);
	res = NULL;

	return (0);
}
 */
