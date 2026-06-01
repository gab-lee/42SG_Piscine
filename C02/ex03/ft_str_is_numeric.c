/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:28:59 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/01 12:44:38 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_numeric(char *c)
{
	if(*c >= '0' && *c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (ft_char_is_numeric(str))
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
