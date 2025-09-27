#include "libft.h"

// `ft_putendl_fd` writes the string `s` to the given file descriptor `fd`,
void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s != '\0')
	{
		write (fd, s++, 1);
	}
	write (fd, "\n", 1);
	return ;
}
/*
#include <stdio.h>
int main (void)
{
	char test[6] = "hello";
	ft_putendl_fd(test, 1);
} */
