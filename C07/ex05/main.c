#include <stdlib.h>
#include <stdio.h>

void ft_count_words(char *str, int *str_len, int *words);

int main(int argc, char **argv)
{
    char *str;
    int i;
    int str_len = 0;
    int words = 0;

    if (argc != 2)
        return (0);
    else
        str = argv[1];
    /*
    while (str[i])
        printf("str[%d]:%s", i, str[i]);
    free(str);
    */
    ft_count_words(str, &str_len, &words);
    printf("No. words:%d\n", words);
    return (0);
}