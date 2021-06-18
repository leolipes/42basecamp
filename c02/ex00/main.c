#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[18] = "Um texto qualquer";
	char	dest[18] = "                  ";
	
	printf ("%s\n", ft_strcpy(dest, src));
	return (0);
}
