/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:28:59 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/02 09:33:10 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_char_uppercase(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (ft_is_char_uppercase(str))
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
