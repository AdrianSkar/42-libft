#include "libft.h"

// `ft_rev_cpy` copies `n` bytes from `src` to `dest` in reverse order.
static void	ft_rev_cpy(unsigned char *dest, const unsigned char *src, size_t n)
{
	size_t	i;

	i = n;
	while (i > 0)
	{
		dest[i - 1] = src[i - 1];
		i--;
	}
}

/**
 * @brief `ft_memmove` copies `n` bytes from  `src` to `dest`.
 *  The memory areas may overlap.
 * @param dest The destination memory area.
 * @param src The source memory area.
 * @param n The number of bytes to be copied.
 * @return A pointer to the destination memory area.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned const char	*src_ptr;
	unsigned char		*dest_ptr;
	size_t				i;

	dest_ptr = dest;
	src_ptr = src;
	if (n < 1 || src_ptr == dest_ptr)
		return (dest);
	if (dest_ptr > src_ptr && dest_ptr - src_ptr < (int)n)
	{
		ft_rev_cpy(dest_ptr, src_ptr, n);
		return (dest);
	}
	if (src_ptr > dest_ptr && src_ptr - dest_ptr < (int)n)
	{
		i = 0;
		while (i < n)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *src = "Hello 42!";
	char dest[11];
	char *ptr = ft_memmove(dest, src, 11);
	printf("ft_memmove: %s\n", ptr);
	ptr = memmove(dest, src, 11);
	printf("memmove: %s\n", ptr);
	return (0);
} */
