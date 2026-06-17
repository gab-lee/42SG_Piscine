/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_atcell.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 13:54:38 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/16 14:00:00 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_max_atcell(int *prev_ia, int *cur_ia, t_minfo *info, int row)
{
	int	i;

	i = 0;
	while (i < info->cols)
	{
		if (cur_ia[i] != 0)
		{
			if (i == 0)
				ft_compare(prev_ia[i], 0, 0, &cur_ia[i]);
			else
				ft_compare(prev_ia[i], cur_ia[i - 1],
					prev_ia[i - 1], &cur_ia[i]);
			if (cur_ia[i] > info->max_size)
			{
				info->max_size = cur_ia[i];
				info->max_row = row;
				info->max_col = i;
			}
		}
		i++;
	}
	return (info->max_size);
}
