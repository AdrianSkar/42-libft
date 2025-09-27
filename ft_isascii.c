/**
 * @brief `ft_isascii` checks for an ASCII character, which is any character
 *  between 0 and 127 inclusive.
 * @param c The character to be checked.
 * @return A non-zero value if the character is an ASCII character, otherwise,
 * zero.
 */
int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	else
		return (1);
}
