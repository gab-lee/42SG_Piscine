#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int main(void)
{
    char *bases[] = {
        "01",         // binary
        "0123456789", // decimal
        "0",          // invalid: length 1
        "",           // invalid: empty
        "0011",       // invalid: duplicate
        "01+",        // invalid: contains +
        "01-",        // invalid: contains -
        "0 1"         // invalid: contains whitespace
    };
    char *strs[] = {
        "0",                                 // zero
        "1",                                 // single digit
        "1111111111111111111111111111111",   // INT_MAX in binary: 2147483647
        "-1111111111111111111111111111111",  // INT_MIN+1 in binary
        "-10000000000000000000000000000000", // INT_MIN in binary
        "2147483647",                        // INT_MAX in decimal
        "-2147483648"                        // INT_MIN in decimal
    };
    int i;
    int j;

    i = 0;
    while (i < 8)
    {
        j = 0;
        while (j < 7)
        {
            printf("----BASE: %s | STR: %s----\n", bases[i], strs[j]);
            printf("Result: %d\n", ft_atoi_base(strs[j], bases[i]));
            printf("-------------------\n");
            j++;
        }
        i++;
    }
    return (0);
}