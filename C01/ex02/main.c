/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 10:44:43 by gabrlee           #+#    #+#             */
/*   Updated: 2026/05/30 10:44:54 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_swap(int *a, int*b);

int	main(void)
{
	int		a;
	int		b;
	char	c;

	a = 1;
	b = 2;
	ft_swap(&a, &b);
	c = a + '0';
	write (1, "a", 1);
	write (1, &c, 1);
	c = b + '0';
	write (1, "b", 1);
	write (1, &c, 1);
	return (0);
}
