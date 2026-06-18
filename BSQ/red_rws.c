/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   red_rws.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiechang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 10:02:38 by jiechang          #+#    #+#             */
/*   Updated: 2026/06/17 00:00:00 by jiechang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	red_read_row(int fd, int *cur_ia, t_minfo *info)
{
	int		col;
	char	c;

	col = -1;
	while (++col, col < info->cols)
	{
		if (read(fd, &c, 1) <= 0 || (c != info->emp && c != info->obs))
			return (-1);
		if (c == info->emp)
			cur_ia[col] = 1;
		else
			cur_ia[col] = 0;
	}
	if (read(fd, &c, 1) <= 0 || c != '\n')
		return (-1);
	return (1);
}

int	red_rws(int fd, t_minfo *info, int *pre_ia, int *cur_ia)
{
	int		row;
	int		*tmp;
	char	c;

	row = 0;
	while (row < info->rows)
	{
		if (red_read_row(fd, cur_ia, info) < 0)
			return (-1);
		ft_max_atcell(pre_ia, cur_ia, info, row);
		tmp = pre_ia;
		pre_ia = cur_ia;
		cur_ia = tmp;
		row++;
	}
	if (read(fd, &c, 1) > 0)
		return (-1);
	return (1);
}
