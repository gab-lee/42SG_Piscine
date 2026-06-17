/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_ia.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 15:00:29 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/16 14:00:00 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	*ft_create_ia(int size)
{
	int	i;
	int	*array;

	i = -1;
	array = malloc(size * sizeof(int));
	if (!array)
		return (NULL);
	while (++i < size)
		array[i] = 0;
	return (array);
}
