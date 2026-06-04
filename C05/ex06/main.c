#include <stdio.h>
int ft_is_prime(int nb);

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
		 73,
		 -1};

	int i;

	i = 0;
	while (i < 8)
	{
		printf("----TEST-CASE-%d----\n", i);
		printf("Nbr %d\n", nbr[i]);
		printf("is Prime? %d\n", ft_is_prime(nbr[i]));
		printf("\n-------------------\n");
		i++;
	}
	return (0);
}
