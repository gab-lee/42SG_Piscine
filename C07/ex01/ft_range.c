/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 09:46:21 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/16 10:07:53 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
	{
		array = NULL;
		return (array);
	}
	array = malloc((max - min) * sizeof(int));
	if (!array)
		return (NULL);
	i = -1;
	while (++i, min + i < max)
		array[i] = min + i;
	return (array);
}
