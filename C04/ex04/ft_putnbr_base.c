/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:18:33 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/08 14:23:14 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr_long_base(long nbr, char *base, int base_len);
int ft_strlen(char *str);
int ft_validbase(char *base);

void ft_putnbr_base(int nbr, char *base)
{
    int base_len;

    base_len = ft_strlen(base);
    if (!ft_validbase(base) || base_len < 2)
        return;
    else if (nbr == 0)
        write(1, &base[0], 1);
    else
        ft_putnbr_long_base((long)nbr, base, base_len);
}

void ft_putnbr_long_base(long nbr, char *base, int base_len)
{
    if (nbr < 0)
    {
        write(1, "-", 1);
        nbr = -nbr;
    }
    if (nbr / base_len != 0)
        ft_putnbr_long_base(nbr / base_len, base, base_len);
    write(1, &base[nbr % base_len], 1);
}
int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return (i);
}
int ft_validbase(char *base)
{
    int i;
    int j;
    i = -1;
    while (base[++i])
    {
        if (base[i] == '+' || base[i] == '-')
            return (0);
        j = i;
        while (base[++j])
        {
            if (base[i] == base[j])
                return (0);
        }
    }
    return (1);
}