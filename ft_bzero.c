#include "libft.h"

/**
 * @brief `ft_bzero` writes `n` zeroed bytes to the string `s`. If `n` is zero,
 * `ft_bzero` does nothing.
 */
void	ft_bzero(void *s, size_t n)
{
	if (n < 1)
		return ;
	ft_memset(s, 0, n);
}
