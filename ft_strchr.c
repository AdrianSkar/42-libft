// `ft_strchr` finds the first occurrence of `c` in `s`.
char	*ft_strchr(const char *s, int c)
{
	unsigned char	needle;

	needle = c;
	while (*s != needle)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}
/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s;
	char	c;

	s = "Hello";
	c = 'l';
	printf("%s\n", ft_strchr(s, c));
	printf("%s\n", strchr(s, c));
	return (0);
} */
