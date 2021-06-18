#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = 0;
	while (number1 <= 98)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			ft_putchar('0' + number1 / 10);
			ft_putchar('0' + number1 % 10);
			ft_putchar(' ');
			ft_putchar('0' + number2 / 10);
			ft_putchar('0' + number2 % 10);
			if (number1 != 98 || number2 != 99)
			{
				write(1, ", ", 2);
			}
			number2++;
		}
		number1++;
	}
}
