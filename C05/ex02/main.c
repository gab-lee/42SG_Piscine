#include <stdio.h>
int ft_iterative_power(int nb, int power);

int main(void)
{
	//---test-cases---//
	// Test Case
	int nbr[] =
		{2,
		 3,
		 5,
		 0,
		 100,
		 -5,
		 -2147483648,
		 -1};

	int pwr[] =
		{0,
		 1,
		 3,
		 5,
		 2,
		 3,
		 1,
		 -1};
	int i;

	i = 0;
	while (i < 8)
	{
		printf("----TEST-CASE-%d----\n", i);
		printf("Nbr %d\n", nbr[i]);
		printf("Power %d\n", pwr[i]);
		printf("Result %d\n", ft_iterative_power(nbr[i], pwr[i]));
		printf("\n-------------------\n");
		i++;
	}
	return (0);
}
