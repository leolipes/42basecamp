#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 23;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	if (b != 0)
	{
		printf("a:%d b:%d\n", a, b);
		return (0);
	}
	else
	{
		write (2, "Unsupported value!\n", 19);
	}
}
