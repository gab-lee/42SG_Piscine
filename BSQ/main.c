/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiechang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 10:30:45 by jiechang          #+#    #+#             */
/*   Updated: 2026/06/16 10:59:53 by jiechang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char **argv)
{
	t_minfo	info;
	int		i;

	if (argc < 2)
	{
		if (solve_map(sav_stdin(), &info) < 0)
			write(2, "map error\n", 10);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		if (solve_map(argv[i], &info) < 0)
			write(2, "map error\n", 10);
		i++;
		if (i < argc)
			write(1, "\n", 1);
	}
	return (0);
}
