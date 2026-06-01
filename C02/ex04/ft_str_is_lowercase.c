/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:28:59 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/01 12:50:21 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_char_lowercase(char *c)
{
	if (*c >= 'a' && *c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (ft_is_char_lowercase(str))
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
