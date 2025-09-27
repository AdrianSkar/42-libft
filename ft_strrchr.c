#include "libft.h"

/**
 * @brief Finds the last occurrence of `c` in `s`.
 * @param s The string to be searched.
 * @param c The character to be found.
 * @return A pointer to the last occurrence of `c` in `s`, or `NULL` if `c` is
 *  not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	char			*saved;
	unsigned char	needle;

	needle = c;
	saved = 0;
	if (needle == '\0')
		saved = (char *)&s[ft_strlen(s)];
	while (*s)
	{
		if (*s == needle)
			saved = (char *)s;
		s++;
	}
	return (saved);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *s = "Hello";
	char c = 'l';
	printf("%s\n", ft_strrchr(s, c));
	printf("%s\n", strrchr(s, c));
	return (0);
}
*/
