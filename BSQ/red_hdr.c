/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   red_hdr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiechang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 10:02:08 by jiechang          #+#    #+#             */
/*   Updated: 2026/06/17 00:00:00 by jiechang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	red_row_num(char *str, int len)
{
	int	rows;
	int	i;

	rows = 0;
	i = 0;
	while (i < len - 3)
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		rows = rows * 10 + (str[i] - '0');
		i++;
	}
	return (rows);
}

int	red_hdr(int fd, t_minfo *info)
{
	char	buf[100];
	int		i;
	int		len;

	i = 0;
	while (read(fd, &buf[i], 1) > 0 && buf[i] != '\n' && i < 99)
		i++;
	if (i < 4)
		return (-1);
	len = i;
	info->rows = red_row_num(buf, len);
	info->emp = buf[i - 3];
	info->obs = buf[i - 2];
	info->fil = buf[i - 1];
	if (info->rows <= 0 || info->emp == info->obs
		|| info->emp == info->fil || info->obs == info->fil)
		return (-1);
	return (1);
}
