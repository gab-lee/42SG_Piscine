/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sav_stdin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiechang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 00:00:00 by jiechang          #+#    #+#             */
/*   Updated: 2026/06/17 00:00:00 by jiechang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	throw_error(void)
{
	write(2, "map error\n", 10);
	exit(1);
}

char	*sav_stdin(void)
{
	char	buf[4096];
	int		bytes;
	int		fd;

	fd = open("tmp_map", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
		throw_error();
	while (1)
	{
		bytes = read(0, buf, 4096);
		if (bytes < 0)
		{
			close(fd);
			throw_error();
		}
		if (bytes == 0)
			break ;
		if (write(fd, buf, bytes) != bytes)
		{
			close(fd);
			throw_error();
		}
	}
	close(fd);
	return ("tmp_map");
}
