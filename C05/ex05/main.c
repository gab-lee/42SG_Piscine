#include <stdio.h>
int ft_sqrt(int nb);

int main(void)
{
	//---test-cases---//
	// Test Case
	int nbr[] =
		{1,
		 2,
		 9,
		 0,
		 81,
		 -5,
		 256,
		 -1};

	int i;

	i = 0;
	while (i < 8)
	{
		printf("----TEST-CASE-%d----\n", i);
		printf("Nbr %d\n", nbr[i]);
		printf("Root %d\n", ft_sqrt(nbr[i]));
		printf("\n-------------------\n");
		i++;
	}
	return (0);
}
