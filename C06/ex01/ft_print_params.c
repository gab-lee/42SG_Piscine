/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:53:47 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/11 09:52:55 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_str(char *str);

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		return (0);
	while (i < argc)
	{
		ft_put_str(argv[i]);
		i++;
	}
	return (0);
}

void	ft_put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
