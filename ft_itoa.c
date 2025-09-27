#include "libft.h"

// count the number of digits in the integer
static int	ft_count_digits(int n)
{
	int	digits;

	digits = 0;
	while (n > 0)
	{
		digits++;
		n /= 10;
	}
	return (digits + 1);
}

// check if the number is negative
static	int	ft_neg(int n)
{
	int	res;

	res = 0;
	if (n < 0)
		res = 1;
	return (res);
}

/**
 * @brief `ft_itoa` converts an integer to a string.
 * @param n The integer to be converted.
 * @return The string representation of the integer.
 * @note The function returns a null-terminated string. The caller must free the
 *  allocated memory.
 * @note The function handles the minimum integer value.
 */
char	*ft_itoa(int n)
{
	int		neg;
	int		n_len;
	char	*res;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = ft_neg(n);
	if (ft_neg(n))
		n = -n;
	n_len = ft_count_digits(n) + neg;
	res = malloc(sizeof(char) * n_len);
	if (!res)
		return (NULL);
	res[--n_len] = '\0';
	res[0] = '-';
	while (n > 0)
	{
		res[--n_len] = (n % 10) + 48;
		n /= 10;
	}
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int test = 47483648;
	// 2147483648, -2147483647
	printf("ft_itoa: %s \n", ft_itoa(test));

	char buffer[33];
	sprintf(buffer, "%d\n", test);
	printf ("sprintf: %s\n",buffer);
	return (0);
} */

/*
/// ft_count_digits
15: count digits and return num + 1 for the null terminator

/// ft_neg
28: set a flag for negative numbers

/// ft_itoa
44: check 0 and INT_MIN
48: manage negative numbers
51: allocate and null terminate
56: add neg sign (overwritten if not negative)
59: populate res with char digits from last to first
*/
