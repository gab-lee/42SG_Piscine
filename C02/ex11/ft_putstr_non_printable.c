/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg     #+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 11:22:03 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/02 12:10:27 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_char_printable(char *c)
{
	if (*c >= 32 && *c < 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_put_hexadecimal(char *c)
{
	char	a;
	
	write(1, "\\", 1);
	a = *c / 16 +'0';
	write(1, &a, 1);
	if (*c % 16 < 10)
	{
		a = *c % 16 + '0';
		write(1, &a, 1);
	}
	else
	{
		a = *c % 16 - 10 + 'a';
		write(1, &a, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (ft_is_char_printable(str))
			write(1,str,1);
		else
			ft_put_hexadecimal(str);
		str++;
	}
}
