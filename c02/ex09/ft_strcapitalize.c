char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && c == 0)
		{
			str[i] = str[i] - 32;
			c = 1;
		}
		else if ((str[i] >= 'a' && str[i] <= 'z') && c == 1)
			c = 1;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && c == 1)
			str[i] = str[i] + 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && c == 0)
			c = 1;
		else if ((str[i] >= '0' && str[i] <= '9'))
			c = 1;
		else
			c = 0;
		i++;
	}
	return (str);
}
