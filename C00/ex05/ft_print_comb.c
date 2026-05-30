/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 16:13:37 by gabrlee           #+#    #+#             */
/*   Updated: 2026/05/30 10:21:10 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_isnbrvalid(int *check, char h_place, char t_place, char o_place)
{
	if (h_place == t_place || h_place == o_place || t_place == o_place)
	{
		*check = 0;
	}
	if (h_place > t_place || h_place > o_place || t_place > o_place)
	{
		*check = 0;
	}
}

void	ft_displaynbr(char h_place, char t_place, char o_place)
{
	write(1, &h_place, 1);
	write(1, &t_place, 1);
	write(1, &o_place, 1);
	write(1, ",", 1);
}

void	ft_print_comb(void)
{
	int		n;
	int		check;
	char	h_place;
	char	t_place;
	char	o_place;

	n = 0;
	while (n <= 999)
	{
		h_place = (n / 100) + '0';
		t_place = ((n / 10) % 10) + '0';
		o_place = (n % 10) + '0';
		check = 1;
		ft_isnbrvalid(&check, h_place, t_place, o_place);
		if (check)
		{
			ft_displaynbr(h_place, t_place, o_place);
			n++;
		}
		else
		{
			n++;
		}
	}
}
