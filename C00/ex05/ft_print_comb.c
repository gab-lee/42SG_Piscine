/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 16:13:37 by gabrlee           #+#    #+#             */
/*   Updated: 2026/05/28 16:37:57 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	n;
	char	h_place; 
	char	t_place; 
	char	o_place;

	n = 0;
	while (n <= 999)
	{ 
		h_place = (n / 100) + '0';
		t_place = ((n / 10)%10) + '0';
		o_place = (n % 10) +'0';
		if (h_place == t_place || h_place == o_place ||\
		t_place == o_place || h_place > t_place ||\
		h_place > o_place || t_place > o_place)
		{
			n++;
		}
		else
		{	
			write(1, &h_place, 1);
			write(1, &t_place, 1);
			write(1, &o_place, 1);
			write(1, ",", 1);
			n++;
		}
	}
}	
