/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 16:23:14 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/08 16:40:49 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src);
char	*ft_strcpy(char *dest, char *src);

char	*ft_strdup(char *src)
{
	char *dest;

	dest = malloc(ft_strlen(src) + 1);
	ft_strcpy(dest,src);
	return (dest);
}

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while(src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	if(!*src)
		return (dest);
	while(++i,src[i] != '\0')
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
