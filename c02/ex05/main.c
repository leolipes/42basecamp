#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	temp[6] = "Abcde";
	char	temp1[6] = "abc5e";
	char	temp2[6] = "ABCDE";
	char	temp3[1] = "";

	printf ("%d\n", ft_str_is_uppercase(temp));
	printf ("%d\n", ft_str_is_uppercase(temp1));
	printf ("%d\n", ft_str_is_uppercase(temp2));
	printf ("%d\n", ft_str_is_uppercase(temp3));
}
