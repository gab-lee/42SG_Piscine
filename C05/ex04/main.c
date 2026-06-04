#include <stdio.h>
int ft_fibonacci(int nb);

int main(void)
{
	//---test-cases---//
	// Test Case
	int index[] =
		{0,
		 1,
		 2,
		 4,
		 -5,
		 100,
		 -2147483648,
		 -1};

	int i;

	i = 0;
	while (i < 8)
	{
		printf("----TEST-CASE-%d----\n", i);
		printf("Index %d\n", index[i]);
		printf("Result %d\n", ft_fibonacci(index[i]));
		printf("\n-------------------\n");
		i++;
	}
	return (0);
}
