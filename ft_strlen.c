#include "libft.h"

// Calculates the length of the string `s`, excluding the terminating null byte
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
