/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 17:15:42 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/15 17:20:26 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *str);
void	ft_free_tab(t_stock_str *tab, int i);

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	i = -1;
	tab[ac].str = 0;
	while (++i, i < ac)
	{
		tab[i].str = av[i];
		tab[i].size = ft_strlen(av[i]);
		tab[i].copy = malloc((tab[i].size + 1) * sizeof(char));
		if (!tab[i].copy)
		{
			ft_free_tab(tab, i);
			free(tab);
			return (NULL);
		}
		ft_strcpy(tab[i].copy, tab[i].str);
	}
	return (tab);
}

void	ft_free_tab(t_stock_str *tab, int i)
{
	while (--i >= 0)
		free(tab[i].copy);
}

int	ft_strlen(char *str)
{
	int	len;

	len = -1;
	while (++len, str[len])
		;
	return (len);
}

char	*ft_strcpy(char *dest, char *str)
{
	int	i;

	i = -1;
	while (++i, str[i])
		dest[i] = str[i];
	dest[i] = '\0';
	return (dest);
}
