char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				d;
	unsigned int	i;

	d = 0;
	i = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (dest);
}

