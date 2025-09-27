#include "libft.h"

/**
 * @brief Creates a new string resulting from the successive applications of `f`
 *  to each character of the string `s`. Each character is passed by its
 *  index to `f` to be modified if necessary.
 * @param s The string to map.
 * @param f The function to apply to each character.
 * @return The string created from the successive applications of `f`.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	res = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>
char f(unsigned int n, char s)
{
	if (!s)
		return ('a');
	if (n % 2 == 0)
		return ((char)ft_toupper(s));

	return ((char)ft_tolower(s));
}
int main (void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz";
	char *result = ft_strmapi(str, f);
	printf("ft_strmapi: |%s| \n", result);

	free(result);
	return (0);
} */

/*
/// ft_strmapi
20: check invalid input
22: allocat len + 1 for the null-terminator
28: apply f to each char and store the result in res
*/
