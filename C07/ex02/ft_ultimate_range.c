/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 10:02:53 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/09 10:14:54 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_fill_array(int *array, int min, int max, int *size);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;

	size = 0;
	if (min >= max)
	{
		*range = malloc(1);
		range[0] = NULL;
		return (-1);
	}
	*range = malloc((max - min + 2) * sizeof(int));
	if(!range)
		return (-1);
	range[max - min + 2] = NULL;
	ft_fill_array(*range, min, max, &size);
	return (size);
}

void	ft_fill_array(int *array, int min, int max, int *size)
{
	int	i;

	i = -1;
	while (++i, (min + i) < max)
		array[i] = min + i;
	*size = i;
}
