#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	a;
	int	*b;
	int	**c;
	int	***d;
	int	****e;
	int	*****f;
	int	******g;
	int	*******h;
	int	********i;

	b = &a;
	c = &b;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	h = &g;
	i = &h;
	ft_ultimate_ft(&i);
	printf("%d\n", a);
	return (0);
}
