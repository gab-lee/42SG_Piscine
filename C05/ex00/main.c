#include <stdio.h>
int ft_iterative_factorial(int nb);

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
		 -2147483648,
		 -1};
	int i;

	i = 0;
	while (i < 7)
	{
		printf("----TEST-CASE-%d----\n", i);
		printf("Nbr %d\n", nbr[i]);
		printf("Factorial %d\n", ft_iterative_factorial(nbr[i]));
		printf("\n-------------------\n");
		i++;
	}
	return (0);
}
