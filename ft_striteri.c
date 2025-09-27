/**
 * @brief Applies function `f` to each character of the string `s`
 * @param s The string to iterate
 * @param f The function to apply to each character
 * @note The function receives the index of the character as first argument
 * @note and the character as second argument
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (*s != '\0')
		f(i++, s++);
	return ;
}
/*
#include <stdio.h>
void test_ft_striteri(unsigned int n, char *s)
{
	n++;
	if (!s)
		return ;
	if (s)
		*s = ft_toupper(*s);
	return ;
}
int main (void)
{
	char str[27] = "abcdefghijklmnopqrstuvwxyz";
	printf("str is: |%s| \n", str);
	ft_striteri(str, test_ft_striteri);
	printf("str is: |%s| \n", str);
	return (0);
} */
