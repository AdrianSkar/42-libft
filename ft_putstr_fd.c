#include "libft.h"

// `ft_putstr_fd` writes the string `s` to the given file descriptor `fd`.
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s != '\0')
	{
		write(fd, s++, 1);
	}
	return ;
}
