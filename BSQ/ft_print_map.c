/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 13:00:00 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/17 00:00:00 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_print_row(int fd, int row, t_minfo *info)
{
	int		j;
	int		srow;
	int		scol;
	char	c;

	srow = info->max_row - info->max_size + 1;
	scol = info->max_col - info->max_size + 1;
	j = 0;
	while (j < info->cols)
	{
		read(fd, &c, 1);
		if (row >= srow && row <= info->max_row
			&& j >= scol && j <= info->max_col)
			write(1, &info->fil, 1);
		else
			write(1, &c, 1);
		j++;
	}
	read(fd, &c, 1);
	write(1, "\n", 1);
}

int	ft_print_map(char *path, t_minfo *info)
{
	int		fd;
	int		i;
	char	c;

	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (-1);
	while (read(fd, &c, 1) > 0 && c != '\n')
		;
	i = 0;
	while (i < info->rows)
	{
		ft_print_row(fd, i, info);
		i++;
	}
	close(fd);
	return (1);
}
