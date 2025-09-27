/**
 * @brief `ft_isalpha` checks for an alphabetic character.
 * @param c The character to be checked.
 * @return A non-zero value if the character is an alphabetic character,
 * otherwise, zero.
 */
int	ft_isalpha(int c)
{
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		return (0);
	else
		return (1);
}
