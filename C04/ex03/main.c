#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	//---test-cases---//
	//Test Case 
    char *tests[] = 
				{"123A", //test alphanumeric  
				"++---123A", //test signs
				"     ++--123A", //test white space + signs
				"  +   -- + - - 123A"}; //test mixed white space + signs
    int  i;

    i = 0;
    while (i < 4)
    {
        printf("----TEST-CASE-%d----\n",i);
        printf("Str %s\n", tests[i]);
        printf("Nbr: %d\n", ft_atoi(tests[i]));
        printf("-------------------\n");
        i++;
    }
    return (0);
}
