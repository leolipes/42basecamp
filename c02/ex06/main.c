#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	temp[6] = "Abcde";
	char	temp1[6] = "abc5e";
	char	temp2[7] = "ABCDE\n";
	char	temp3[3] = "a\t";

	printf ("%d\n", ft_str_is_printable(temp));
	printf ("%d\n", ft_str_is_printable(temp1));
	printf ("%d\n", ft_str_is_printable(temp2));
	printf ("%d\n", ft_str_is_printable(temp3));
}
