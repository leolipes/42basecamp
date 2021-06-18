#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	str[5] = {'1', '2', '3', '4', '5'};
	char	str1[5] = {'1', '2', 'a', '4', '5'};

	printf("%d\n", ft_str_is_numeric(str));
	printf("%d\n", ft_str_is_numeric(str1));
	return (0);
}
