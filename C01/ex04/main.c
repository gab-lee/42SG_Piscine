/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 16:42:42 by gabrlee           #+#    #+#             */
/*   Updated: 2026/05/29 16:48:48 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 9;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	printf("%d", b);
	return (0);
}
