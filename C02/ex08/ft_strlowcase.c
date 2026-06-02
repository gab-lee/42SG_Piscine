/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:28:59 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/02 12:35:02 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_char_low_uppercase(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
	{
		*c = *c + 32;
	}
}

int	ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		ft_char_low_uppercase(str);
		str++;
	}
	return (1);
}
