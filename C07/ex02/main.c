/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 09:49:44 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/09 10:15:52 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	min;
	int max;
	int i;
	int *array;
	int n;

	min = -100;
	max = -10;
	i = -1;
	n = ft_ultimate_range(&array, min, max);
	while (i++, min + i < max)
	{
		printf("array[%d]:%d\n",i,array[i]);
	}
	printf("size: %d",n);
	free(array);
	return (0);
}
