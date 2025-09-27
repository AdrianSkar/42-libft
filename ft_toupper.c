// Returns the uppercase equivalent of the character c or c if no uppercase
// equivalent is found.
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}
