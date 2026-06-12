#include "ft_abs.h"
#include <stdio.h>

int main(void)
{
    printf("ABS(-5): %ld\n", ABS(-5));
    printf("ABS(5): %ld\n", ABS(5));
    printf("ABS(0): %ld\n", ABS(0));
    printf("ABS(-2147483648): %ld\n", ABS(-2147483648));

    return (0);
}