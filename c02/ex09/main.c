#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	temp[57] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	
	printf ("%s\n", ft_strcapitalize(temp));
}
