/**
 * @brief `ft_isdigit` checks for a digit (0 through 9).
 * @param c The character to be checked.
 * @return A non-zero value if the character is a digit, otherwise, zero.
 */
int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	else
		return (1);
}
