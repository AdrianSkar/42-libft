#include "libft.h"

/**
 * @brief Copies up to `size - 1` characters from the NUL-terminated string
 *  `src` to `dst`, NUL-terminating the result.
 * @param dst The destination string.
 * @param src The source string.
 * @param size The size of the destination buffer.
 * @return The total length of the string it tried to create.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (size != 0)
	{
		while (i < size -1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
