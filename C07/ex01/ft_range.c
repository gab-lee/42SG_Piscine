/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 09:46:21 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/09 10:00:50 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_fill_array(int *array, int min, int max);

int	*ft_range(int min, int max)
{
	int	*array;
	
	if (min >= max)
	{
		array = NULL;
		return (array);
	}
	array = malloc((max - min + 1)* sizeof(int));
	ft_fill_array(array, min, max);
	return (array);
}

void	ft_fill_array(int *array, int min, int max)
{
	int i;

	i = -1;
	while (++i, min + i <= max)
		array[i] = min + i;
}
