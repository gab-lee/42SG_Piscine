#include "ft_stock_str.h"
#include <stdlib.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *tab;
    int i;
    tab = malloc(sizeof(t_stock_str) * ac);
    if (!tab)
        return (NULL);
    i = -1;
    while (++i, i < ac)
    {
        tab[i].str = av[i];
        tab[i].size = ft_strlen(av[i]);
        tab[i].copy = malloc(tab[i].size * sizeof(char));
        // need to check for memory errors
        ft_strcpy(tab[i].copy, tab[i].str);
    }
    return (tab);
}

int ft_strlen(char *str)
{
    int len;

    len = -1;
    while (str[len++])
        ;
    return (len);
}

char *ft_strcpy(char *dest, char *str)
{
    int i;
    i = -1;
    while (str[++i])
        dest[i] = str[i];
    dest[i] = '\0';
    return (dest);
}