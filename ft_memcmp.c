#include "libft.h"

/**
 * @brief `ft_memcmp` compares byte string `s1` against byte string `s2`.
 *  Both strings are assumed to be `n` bytes long.
 * @param s1 The first string.
 * @param s2 The second string.
 * @param n The number of bytes to be compared.
 * @return An integer less than, equal to, or greater than zero if the first `n`
 *  bytes of `s1` are found, respectively, to be less than, to match, or be
 *  greater than the first `n` bytes of `s2`.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;

	s1_ptr = (unsigned char *)s1;
	s2_ptr = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*s1_ptr != *s2_ptr)
			return ((unsigned char) *s1_ptr - (unsigned char) *s2_ptr);
		s1_ptr++;
		s2_ptr++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *str1 = "Hello 42!";
	char *str2 = "Hallo 42!";
	int n = 3;
	int ret = ft_memcmp(str1, str2, n);
	printf("ft_memcmp: %d\n", ret);
	ret = memcmp(str1, str2, n);
	printf("memcmp: %d\n", ret);
	return (0);
} */
