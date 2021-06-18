void	ft_putchar(char c);

void	print_at(int line, int column, int max_l, int max_c)
{
	if (line == 1)
	{
		if (column == 1 || column == max_c)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else if (line == max_l)
	{
		if (column == 1 || column == max_c)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (column == 1 || column == max_c)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 1;
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			print_at(line, column, y, x);
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
