/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:18:55 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/02 11:04:56 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *str, unsigned int size)
{
	char len;
	
	len = 0;
	while (*str != '\0')
	{
		if (size >1)
		{
			*dest = *str;
			dest++;
			size--;
		}
		str++;
		len++;
	}
	*dest = '\0';
	return (len);
}
