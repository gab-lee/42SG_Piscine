#include <stdlib.h>
#include <stdio.h>

char **ft_split(char *str, char *charset);

int main(int argc, char **argv)
{
    char *str;
    char **array;
    int i = -1;
    int str_len = 0;
    int words = 0;
    char *charset = "abc";

    if (argc != 2)
        return (0);
    else
        str = argv[1];
    array = ft_split(str, charset);
    if (!array)
        return (0);
    while (++i, array[i])
        printf("str[%d]:%s\n", i, array[i]);
    free(array);
    //ft_count_words(str, &str_len, &words);
    //printf("No. words:%d\n", words);
    return (0);
}