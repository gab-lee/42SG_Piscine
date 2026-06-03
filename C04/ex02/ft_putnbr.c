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

int		ft_get_nbrlen(int nbr, int len);
void	ft_put_digit(int nbr, int len);

void	ft_putnbr(int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		write(1, "0", 1);
	if (nbr < 0)
		write(1, "-", 1);
	len = ft_get_nbrlen(nbr, len);
	while (len)
	{
		ft_put_digit(nbr, len);
		len--;
	}
}

int	ft_get_nbrlen(int nbr, int len)
{
	while (nbr)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

void	ft_put_digit(int nbr, int len)
{
	char	a;
	while (len - 1)
	{
		nbr = nbr / 10;
		len--;
	}
	nbr = nbr % 10;
	if (nbr < 0)
		nbr = nbr * -1;
	a = '0' + nbr;
	write (1, &a, 1);
}