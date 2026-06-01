/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:28:59 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/01 13:15:14 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_char_printable(char *c)
{
	if (*c >= 32)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (ft_is_char_printable(str))
		{
			str++;
			continue;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
