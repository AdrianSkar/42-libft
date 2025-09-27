#include "libft.h"

// Counts "word" instances given a string `s` and a delimiter character `c`.
static size_t	ft_count_instances(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			i++;
			while (*s != c && *s != '\0')
				s++;
		}
	}
	return (i);
}

// Frees all the memory allocated for the array of strings and returns `NULL`.
static void	*ft_free_all(char **res)
{
	char	**temp;

	temp = res;
	while (*temp != NULL)
	{
		free(*temp);
		*temp++ = NULL;
	}
	free(res);
	res = NULL;
	return (NULL);
}

// Populates the array of strings with the words found in the string. No malloc.
static char	**ft_populate_res(char const *s, char c, char **res)
{
	size_t	start;
	size_t	end;
	size_t	res_idx;

	res_idx = 0;
	end = 0;
	while (s[end] != '\0')
	{
		if (s[end] != c)
		{
			start = end;
			while (s[end] != c && s[end] != '\0')
				end++;
			res[res_idx] = ft_substr(s, start, end - start);
			if (res[res_idx] == NULL)
				return (ft_free_all(res));
			res_idx++;
		}
		else
			end++;
	}
	res[res_idx] = NULL;
	return (res);
}

/**
 * @brief `ft_split` splits the string `s` using the character `c` as delimiter.
 * @param s The string to split.
 * @param c The delimiter character.
 * @return A NULL terminated array of strings obtained by splitting `s` or NULL
 *  if the allocation fails.
 */
char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	arrs;

	arrs = ft_count_instances(s, c);
	res = malloc(sizeof(char *) * (arrs + 1));
	if (!res)
		return (NULL);
	return (ft_populate_res(s, c, res));
}

/*
#include <stdio.h>
int	main(void)
{
	char	*s;
	char	c;
	char	**result;
	size_t	i;

	s = "hello!";
	c = ' ';
	result = ft_split(s, c);
	i = 0;
	while (result[i] != NULL)
	{
		printf("str: |%s|\n", result[i]);
		if (result[i] != NULL)
		i++;
	}
	printf("end: |%s|\n", result[i]);

	ft_free_all(result, NULL);
	return (0);
} */

/*
/// count instances
22: skip delimiters
26: count instances
27: move to next or end

/// populate res
55: find word start
58: find word end
60: copy word to its res' slot
66: move to next or end

/// split
79: trim s of c's
82: count and allocate instances
86: populate res
*/
