/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:28:06 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/11 09:58:35 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_str(char *str);
void	ft_sort_params(char **params, int size);
void	ft_swap(char **str1, char **str2);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		return (0);
	if (argc > 2)
		ft_sort_params(argv + 1, argc - 1);
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

void	ft_sort_params(char **params, int size)
{
	int	i;
	int	max;

	while (size)
	{
		i = 0;
		max = 0;
		while (i < size)
		{
			if (ft_strcmp(params[i], params[max]) > 0)
				max = i;
			i++;
		}
		ft_swap(&params[max], &params[size - 1]);
		size--;
	}
}

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		else
		{
			s1++;
			s2++;
		}
	}
	return (*s1 - *s2);
}
