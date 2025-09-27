#include "libft.h"

/**
 * @brief `ft_isalnum` checks for an alphanumeric character.
 * @param c The character to be checked.
 * @return A non-zero value if the character is an alphanumeric character,
 * otherwise, zero.
 */
int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	else
		return (0);
}
