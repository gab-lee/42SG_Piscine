/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   red_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiechang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 00:00:00 by jiechang          #+#    #+#             */
/*   Updated: 2026/06/17 00:00:00 by jiechang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	red_get_cols(char *path, t_minfo *info)
{
	int		fd;
	char	c;

	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (-1);
	while (read(fd, &c, 1) > 0 && c != '\n')
		;
	info->cols = 0;
	while (read(fd, &c, 1) > 0 && c != '\n')
		info->cols++;
	close(fd);
	if (info->cols <= 0)
		return (-1);
	return (1);
}

int	red_map_err(int fd, int *pre_ia, int *cur_ia)
{
	free(pre_ia);
	free(cur_ia);
	close(fd);
	return (-1);
}

int	red_map(char *path, t_minfo *info)
{
	int		fd;
	int		*pre_ia;
	int		*cur_ia;
	char	c;

	if (red_get_cols(path, info) < 0)
		return (-1);
	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (-1);
	while (read(fd, &c, 1) > 0 && c != '\n')
		;
	pre_ia = ft_create_ia(info->cols);
	cur_ia = ft_create_ia(info->cols);
	if (!pre_ia || !cur_ia)
		return (red_map_err(fd, pre_ia, cur_ia));
	if (red_rws(fd, info, pre_ia, cur_ia) < 0)
		return (red_map_err(fd, pre_ia, cur_ia));
	free(pre_ia);
	free(cur_ia);
	close(fd);
	return (1);
}
