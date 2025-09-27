/**
 * @brief `ft_isprint` checks for any printable character, including space.
 * @param c The character to be checked.
 * @return A non-zero value if the character is a printable character, otherwise
 * , zero.
 */
int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	else
		return (1);
}
