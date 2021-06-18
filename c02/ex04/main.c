#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	temp[6] = "Abcde";
	char	temp1[6] = "abc5e";
	char	temp2[6] = "abcde";
	char	temp3[1] = "";

	printf ("%d\n", ft_str_is_lowercase(temp));
	printf ("%d\n", ft_str_is_lowercase(temp1));
	printf ("%d\n", ft_str_is_lowercase(temp2));
	printf ("%d\n", ft_str_is_lowercase(temp3));
}