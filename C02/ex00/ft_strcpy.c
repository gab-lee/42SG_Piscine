/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 09:57:03 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/01 10:43:51 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *str)
{
	char	*p;

	p = dest;
	while (*str != '\0')
	{
		*p = *str;
		str++;
		p++;
	}
	return dest;
}
