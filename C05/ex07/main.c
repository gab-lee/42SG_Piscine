#include <stdio.h>
int ft_find_next_prime(int nb);

int main(void)
{
	//---test-cases---//
	// Test Case
	int nbr[] =
		{1,
		 2,
		 9,
		 0,
		 7,
		 13,
		 298,
		 -1};

	int i;

	i = 0;
	while (i < 8)
	{
		printf("----TEST-CASE-%d----\n", i);
		printf("Nbr %d\n", nbr[i]);
		printf("Next Prime? %d\n", ft_find_next_prime(nbr[i]));
		printf("\n-------------------\n");
		i++;
	}
	return (0);
}
