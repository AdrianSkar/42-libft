#include "libft.h"

/**
 * @brief `ft_memset` fills the first `n` bytes of the memory area pointed to by
 *  `s` with the constant byte `c`.
 * @param s The memory area to be filled.
 * @param c The byte to be set.
 * @param n The number of bytes to be set to the value.
 * @return A pointer to the memory area `s`.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	if (n < 1)
		return (s);
	while (n--)
		*ptr++ = c;
	return (s);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[50] = "Hello 42!";
	ft_memset(str, 'a', 5);
	printf("ft_memset: %s\n", str);
	memset(str, 'a', 5);
	printf("memset: %s\n", str);
	return (0);
}
 */
