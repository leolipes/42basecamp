#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);//unsigned (valor n pode ser negativo); n = tamanho do vetor

int	main(void)
{
	char	src[18] = "Um texto qualquer";
	char	dest[18] = "                  ";
	
	printf ("%s\n", ft_strncpy(dest, src, 18));
	return (0);
}
