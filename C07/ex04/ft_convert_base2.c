/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:33:55 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/15 12:22:28 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (-1);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_validbase(char *base)
{
	int	i;
	int	j;

	i = -1;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		else if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i;
		while (base[++j])
		{
			if (base[i] == base[j])
				return (0);
		}
	}
	return (1);
}

void	ft_strnbr_long_base(long nbr, char *base, int base_len, char *str)
{
	if (nbr / base_len != 0)
		ft_strnbr_long_base(nbr / base_len, base, base_len, str - 1);
	*str = base[nbr % base_len];
	return ;
}

int	base_index(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
	{
		if (base[i] == c)
			return (i);
	}
	return (-1);
}

char	*ft_parse_str(char *str, int *neg, char *base)
{
	int	i;

	i = -1;
	while (++i, str[i])
	{
		if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13) || str[i] == '+')
			continue ;
		else if (str[i] == '-')
			*neg = *neg * -1;
		else if (base_index(str[i], base) >= 0)
			return (&str[i]);
		else
			return (NULL);
	}
	return (NULL);
}
