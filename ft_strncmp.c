/**
 * @brief Compares the first `n` bytes of `s1` and `s2`.
 * @param s1 The first string to be compared.
 * @param s2 The second string to be compared.
 * @param n The maximum number of bytes to be compared.
 * @return An integer less than, equal to, or greater than zero if `s1` is
 *  found, respectively, to be less than, to match, or be greater than `s2`.
 */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while ((*s1 || *s2) && n)
	{
		if (*s1 != *s2)
			return ((unsigned char) *s1 - (unsigned char) *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *s1 = "Hello";
	char *s2 = "Hello";
	unsigned int n = 5;
	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n", strncmp(s1, s2, n));
	return (0);
}
 */
