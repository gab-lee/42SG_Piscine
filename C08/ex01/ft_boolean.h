#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

t_bool ft_is_even(int nbr)
{
return ((EVEN(nbr)) ? TRUE : FALSE);
}

#endif