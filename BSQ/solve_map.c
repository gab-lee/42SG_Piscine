/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 14:17:09 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/17 00:00:00 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	solve_map(char *map, t_minfo *info)
{
	int	fd;

	info->max_size = 0;
	fd = open(map, O_RDONLY);
	if (fd < 0)
		return (-1);
	if (red_hdr(fd, info) < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	if (red_map(map, info) < 0)
		return (-1);
	if (info->max_size == 0)
		return (-1);
	if (ft_print_map(map, info) < 0)
		return (-1);
	return (0);
}
