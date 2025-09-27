#include "libft.h"

/**
 * @brief Finds the first occurrence of `needle` in `haystack`, where the search
 *  is limited to the first `len` characters of `haystack.
 * @param haystack The string to be searched.
 * @param needle The string to search for.
 * @param len The maximum number of characters to search.
 * @return A pointer to the first occurrence of `needle` in `haystack`, or `NULL`
 *  if `needle` is not found.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h_idx;
	size_t	n_len;
	size_t	match_end;

	h_idx = 0;
	n_len = ft_strlen(needle);
	if (!n_len)
		return ((char *)haystack);
	while (haystack[h_idx] && h_idx < len)
	{
		match_end = h_idx + n_len - 1;
		if (match_end < len && ft_strncmp(&haystack[h_idx], needle, n_len) == 0)
			return ((char *)&haystack[h_idx]);
		h_idx++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main(void){
	char test1[] = "reverse";
	char test2[] = "er";
	size_t n = 5;
	printf("ft: %s\n", ft_strnstr(test1, test2, n));
	printf("or: %s\n", strnstr(test1, test2, n));
	printf("ft adr: %p\n", (void *)ft_strnstr(test1, test2, n));
	printf("or adr: %p\n", (void *)strnstr(test1, test2, n));
}
*/
