/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 17:21:06 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/15 17:23:05 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_display(struct s_stock_str par);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
void	ft_putnbr_long(long nbr);

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = -1;
	while (++i, par[i].str != 0)
	{
		ft_display(par[i]);
	}
}

void	ft_display(t_stock_str par)
{
	ft_putstr(par.str);
	ft_putnbr(par.size);
	ft_putstr(par.copy);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (++i, str[i])
		write(1, &str[i], 1);
	write(1, "\n", 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == 0)
		write(1, "0", 1);
	else
		ft_putnbr_long((long)nbr);
	write(1, "\n", 1);
}

void	ft_putnbr_long(long nbr)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr / 10 != 0)
		ft_putnbr_long(nbr / 10);
	write(1, &(char){nbr % 10 + '0'}, 1);
}
