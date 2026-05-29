/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 16:34:06 by gabrlee           #+#    #+#             */
/*   Updated: 2026/05/29 16:40:39 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int		a;
	int		b;
	int		div;
	int		mod;

	a = 9;
	b = 1;
	ft_div_mod(a, b, &div, &mod);
	printf("%d", div);
	printf("%d", mod);
	return (0);
}
