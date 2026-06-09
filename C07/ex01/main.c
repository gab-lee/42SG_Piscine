/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 09:49:44 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/09 09:56:07 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int *ft_range(int min, int max);

int	main(void)
{
	int	min;
	int max;
	int i;
	int *array;

	min = 8;
	max = 32;
	i = -1;
	array = ft_range(min, max);
	while (i++, min + i <= max)
	{
		printf("array[%d]:%d\n",i,array[i]);
	}

}
