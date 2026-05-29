#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	p0;
	int	*p1;
	int	**p2;
	int	***p3;
	int	****p4;
	int	*****p5;
	int	******p6;
	int	*******p7;
	int	********p8;

	p0 = 0;
	p1 = &p0;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	ft_ultimate_ft(&p8);
	
	int	a;
	char	b;
	a = p0/10;
	b = a + '0';
	write(1, &b, 1);
	a = p0%10;
	b = a + '0';
	write(1, &b, 1);
	return (0);
}
