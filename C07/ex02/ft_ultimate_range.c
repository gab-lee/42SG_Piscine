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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (-1);
	i = -1;
	while (++i, i < (max - min))
		tab[i] = min + i;
	*range = tab;
	return (max - min);
}
