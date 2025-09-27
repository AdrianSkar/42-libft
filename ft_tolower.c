// Returns the lowercase equivalent of the character c or c if no lowercase
// equivalent is found.
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}
