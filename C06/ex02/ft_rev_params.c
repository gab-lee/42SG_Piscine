/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:20:03 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/08 15:27:05 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_put_str(char *str);

int	main(int argc, char ** argv)
{
	if (argc == 1)
		return (0);
	while (argc > 1)
	{
		ft_put_str(argv[argc-1]);
		argc--;
	}
	return (0);
}

void ft_put_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1 );
}
