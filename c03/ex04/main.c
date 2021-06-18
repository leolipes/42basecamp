#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str[9] = "Leonardo";
	printf("%s\n", ft_strstr(str, "nar"));
	char str1[9] = "Leonardo";
	printf("%s\n", ft_strstr(str1, "Le"));
	char str2[10] = "Leonardo2";
	printf("%s\n", ft_strstr(str2, "o2"));
	char str3[9] = "Leonardo";
	printf("%s\n", ft_strstr(str3, "z"));
	char str4[9] = "Leonardo";
	printf("%s\n", ft_strstr(str4, "cpr0"));
}
