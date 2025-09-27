#include "libft.h"

/**
 * @brief Calculates the length of the string `s` up to `maxlen` bytes
 * @param s The string to calculate the length of
 * @param maxlen The maximum length to calculate
 * @return The length of the string `s` but at most `maxlen`
 * @note Used to avoid reading beyond the end of `dst`
 */
static	size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (i < maxlen && s[i])
		i++;
	return (i);
}

/**
 * @brief Appends the NUL-terminated string `src` to the end of `dst`. It will
 *  append at most `size - strlen(dst) - 1` bytes, NUL-terminating the result.
 * @param dst The destination string.
 * @param src The source string.
 * @param size The size of the destination buffer.
 * @return The total length of the string it tried to create.
 * @note If the return value is greater than or equal to `size`, the output
 * string was truncated.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	max_dst;
	size_t	i;
	size_t	j;

	src_len = ft_strlen(src);
	max_dst = ft_strnlen(dst, size);
	i = max_dst;
	j = 0;
	if (max_dst == size)
		return (src_len + max_dst);
	while (src[j] && i < (size - 1))
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (src_len + max_dst);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char dst[50] = "Hello ";
	char src[] = "42!";
	size_t size = 10;
	printf("ft_strlcat: %lu\n", ft_strlcat(dst, src, size));
	printf("dst: %s\n", dst);
	char dst2[50] = "Hello ";
	char src2[] = "42!";
	printf("strlcat: %lu\n", strlcat(dst2, src2, size));
	printf("dst: %s\n", dst2);
	return (0);
}
 */
