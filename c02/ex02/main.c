#include <stdio.h>

int ft_str_is_alpha(char *str);

int	main(void)
{
	char	temp[5] = "abcde";
	char	temp1[5] = "abc5e";

	printf ("%d\n", ft_str_is_alpha (temp));
	printf ("%d\n", ft_str_is_alpha (temp1));
	return (0);
}
