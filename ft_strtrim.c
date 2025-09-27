#include "libft.h"

/**
 * @brief Allocates (with malloc(3)) and returns a copy of `s1` with the
 *  characters specified in `set` removed from start and end of `s1`.
 * @param s1 The string to be trimmed.
 * @param set The set of characters to trim.
 * @return The trimmed string. NULL if the allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	char					*res;
	size_t					res_len;
	unsigned int			start;
	unsigned int			end;

	if (!set || !*set)
		return (ft_strdup(s1));
	if (!s1 || !*s1)
		return (ft_strdup(""));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end && ft_strchr(set, s1[end]))
		end--;
	if (start > end)
		return (ft_strdup(""));
	res_len = (end - start) + 1;
	res = ft_substr(s1, start, res_len);
	return (res);
}

/*
#include <stdio.h>
int	main(void)
{
	char *s1 = "015610";
	char *set = "01";

	printf("ft_strtrim: |%s|", ft_strtrim(s1, set));
}
*/
