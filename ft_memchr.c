#include "libft.h"

/**
 * @brief `ft_memchr` scans the initial `n` bytes of the memory area pointed
 *  to by `s` for the first instance of `c`.
 * @param s The memory area to be scanned.
 * @param c The character to be located.
 * @param n The number of bytes to be scanned.
 * @return A pointer to the matching byte or `NULL` if the character does
 *  not occur in the given memory area.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	needle;
	unsigned char	*s_ptr;

	needle = c;
	s_ptr = (unsigned char *)s;
	while (n--)
	{
		if (*s_ptr == needle)
			return (s_ptr);
		s_ptr++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *str = "Hello World";
	char *ptr = ft_memchr(str, 'W', 11);
	printf("ft_memchr: %s\n", ptr);
	ptr = memchr(str, 'W', 11);
	printf("memchr: %s\n", ptr);
	return (0);
} */
