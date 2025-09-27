#include "libft.h"

/**
 * @brief `ft_atoi` converts the initial portion of the string pointed to by
 *  `nptr` to `int`.
 * @param nptr The string to be converted.
 * @return The converted value.
 */
int	ft_atoi(const char *nptr)
{
	int		neg;
	int		result;

	if (!nptr[0])
		return (0);
	neg = 1;
	result = 0;
	while (*nptr == 32 || (*nptr > 8 && *nptr < 14))
	{
		nptr++;
	}
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			neg *= -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		result = result * 10 + *nptr - '0';
		nptr++;
	}
	return (result * neg);
}
