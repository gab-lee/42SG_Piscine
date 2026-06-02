/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:28:59 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/02 09:52:51 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_char_up_lowercase(char *c)
{
	if (*c >= 'a' && *c <= 'z')
	{
		*c = *c -  32;
	}
}

int	ft_strupcase(char *str)
{
	while (*str != '\0')
	{
		ft_char_up_lowercase(str);
		str++;
	}
	return (1);
}
