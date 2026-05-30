/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 17:12:29 by gabrlee           #+#    #+#             */
/*   Updated: 2026/05/30 14:55:21 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sizenbr(int nbr, int *size)
{
	while (nbr)
	{
		nbr = nbr / 10;
		*size = *size + 1;
	}
}

void	ft_displaynbr(int nbr)
{
	char	c;

	if (nbr < 0)
	{
		nbr = nbr * -1;
	}
	c = '0' + nbr;
	write (1, &c, 1);
}

void	ft_displayd(int nbr, int exp)
{
	int	d;

	while (exp - 1)
	{
		nbr = nbr / 10;
		exp = exp - 1;
	}
	d = nbr % 10;
	ft_displaynbr(d);
}

void	ft_putnbr(int nbr)
{
	int	size;

	if (nbr == 0)
	{
		ft_displaynbr(0);
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
	}
	size = 0;
	ft_sizenbr(nbr, &size);
	while (size)
	{
		ft_displayd(nbr, size);
		size = size - 1;
	}
}
