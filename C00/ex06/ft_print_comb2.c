/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 16:40:49 by gabrlee           #+#    #+#             */
/*   Updated: 2026/05/30 14:56:05 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_number(int n)
{
	char	t_place;
	char	o_place;

	t_place = n / 10 + '0';
	o_place = n % 10 + '0';
	write(1, &t_place, 1);
	write(1, &o_place, 1);
}

void	ft_write_nbr_set(int a, int b, int *started)
{
	if (*started)
	{
		write(1, ", ", 2);
	}
	ft_write_number(a);
	write(1, " ", 1);
	ft_write_number(b);
	*started = 1;
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	started;

	a = 0;
	started = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99 && b > a)
		{
			ft_write_nbr_set(a, b, &started);
			b++;
		}
		a++;
	}
}
