#include "libft.h"

// `ft_putchar_fd` writes the character `c` to the given file descriptor `fd`.
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
