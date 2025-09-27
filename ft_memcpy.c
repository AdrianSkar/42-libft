#include "libft.h"

/**
 * @brief `ft_memcpy` copies `n` bytes from  `src` to `dest`.
 *  The memory areas must not overlap. Similar to `ft_memmove()`.
 * @param dest The destination memory area.
 * @param src The source memory area.
 * @param n The number of bytes to be copied.
 * @return A pointer to the destination memory area.
 * @note The behavior is undefined if the memory areas overlap, if either `src`
 *  or `dest` is a null pointer, and if `n` is greater than the size of the
 *  memory areas.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*src_ptr;
	unsigned char	*dest_ptr;

	if (n < 1 || dest == src)
		return (dest);
	src_ptr = (unsigned char *)src;
	dest_ptr = (unsigned char *)dest;
	while (n--)
		*dest_ptr++ = *src_ptr++;
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *src = "Hello 42!";
	char dest[11];
	char *ptr = ft_memcpy(dest, src, 11);
	printf("ft_memcpy: %s\n", ptr);
	ptr = memcpy(dest, src, 11);
	printf("memcpy: %s\n", ptr);
	return (0);
} */
