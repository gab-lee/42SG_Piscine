#include <stdio.h>

int ft_atoi(char *str);

int main(void)
{
    //---test-cases---//
    // Test Case
    char *tests[] =
        {"-2147483648",      // test alphanumeric
         "++---12321321A",   // test signs
         "     ++--123A123", // test white space + signs
         "  +--+--"};        // test mixed white space + signs
    int i;

    i = 0;
    while (i < 4)
    {
        printf("----TEST-CASE-%d----\n", i);
        printf("Str %s\n", tests[i]);
        printf("Nbr: %d\n", ft_atoi(tests[i]));
        printf("-------------------\n");
        i++;
    }
    return (0);
}
