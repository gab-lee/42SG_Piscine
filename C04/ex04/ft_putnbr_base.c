/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:18:33 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/08 14:23:14 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_char_in_str(char c, char *str);
char	*ft_append_cat(char *dest, char c);
int		ft_get_base_len(char *base);
void	ft_put_revstr(char *str);
int		ft_isneg(int nb);

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	char	result[64];
	int		sign;
	int		i;

	result[0] = '\0';
	sign = ft_isneg(nbr);
	base_len = ft_get_base_len(base);
	if (base_len <= 1)
		return ;
	if (nbr == 0)
		write(1, &base[0], 1);
	while (nbr)
	{
		ft_append_cat(result, (base[sign * nbr % base_len]));
		nbr = sign * (nbr / base_len);
		sign = 1;
	}
	i = 0;
	while (result[i] != '\0')
		i++;
	while (i--)
		write(1, &result[i], 1);
}

int	ft_isneg(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		return (-1);
	}
	else
		return (1);
}

int	ft_get_base_len(char *base)
{
	int	len;

	len = 0;
	if (*base == '\0')
		return (0);
	while (*base != '\0')
	{
		if (*base == '+' || *base == '-')
			return (0);
		if (ft_char_in_str(*base, base + 1))
			return (0);
		len++;
		base++;
	}
	return (len);
}

char	*ft_append_cat(char *dest, char c)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest[i] = c;
	dest[i + 1] = '\0';
	return (dest);
}

int	ft_char_in_str(char c, char *str)
{
	while (*str != '\0')
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}
