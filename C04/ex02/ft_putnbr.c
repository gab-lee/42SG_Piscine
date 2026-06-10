/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 15:52:07 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/09 15:53:41 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr_long(long nbr);

void ft_putnbr(int nbr)
{
	if (nbr == 0)
		write(1, "0", 1);
	else
		ft_putnbr_long((long)nbr);
}
void ft_putnbr_long(long nbr)
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
