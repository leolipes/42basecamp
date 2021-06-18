#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main (void)
{
	char a[5] = "LIpe";
	char b[5] = "Lipe";

	printf ("%d\n", ft_strncmp(a, b, 2));
	return (0);
}
