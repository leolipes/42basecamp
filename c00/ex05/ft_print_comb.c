#include <unistd.h>

void	comma(char hundred)
{
	if (hundred != '7')
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	hundred;
	char	ten;
	char	unit;

	hundred = '0';
	ten = '1';
	unit = '2';
	while (hundred <= '7')
	{
		ten = hundred + 1;
		while (ten <= '8')
		{
			unit = ten + 1;
			while (unit <= '9')
			{
				write (1, &hundred, 1);
				write (1, &ten, 1);
				write (1, &unit, 1);
				comma (hundred);
				unit++;
			}
			ten++;
		}
		hundred++;
	}
}
