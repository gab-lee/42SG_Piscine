#include <stdio.h>

int ft_putnbr_base(int nbr, char *base);

int main(void)
{
	//---test-cases---//
	// Test Case
	int nbr[] =
		{0,
		 2147483647,
		 123456,
		 100,
		 -2147483648,
		 -1};
	char *tests[] =
		{"01",				 // binary
		 "0123456789",		 // decimal
		 "poneyvif",		 // octal
		 "0101",			 // duplicate
		 "0123456789abcdef", // hexdecimal
		 "01"};
	int i;

	i = 0;
	while (i < 6)
	{
		printf("----TEST-CASE-%d----\n", i);
		printf("Nbr %d\n", nbr[i]);
		printf("Base  %s\n", tests[i]);
		ft_putnbr_base(nbr[i], tests[i]);
		printf("\n-------------------\n");
		i++;
	}
	return (0);
}
