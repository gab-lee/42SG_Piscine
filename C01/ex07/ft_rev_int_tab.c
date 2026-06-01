/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 16:13:33 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/01 09:38:04 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int*b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	cur;

	cur = 0;
	while (cur < size / 2)
	{
		ft_swap(tab + cur, tab + size - cur - 1);
		cur++;
	}
}
