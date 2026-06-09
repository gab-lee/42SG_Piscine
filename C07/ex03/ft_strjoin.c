/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 10:57:54 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/09 11:13:07 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int i;
    int len;

	i = 0;
	if (size <= 0)
	{
		res = malloc(1);
		res[0] = '\0';
		return (res);
	}
	while (++i < size)
		len = len + ft_strlen(strs[i]);
	len = len + (ft_strlen(sep) * size - 1);
	res = malloc(len + 1);
	i = -1;
	while (++i < size)
	{
		ft_strcat(res,strs[i]);
		if (i != size -1)
			ft_strcat(res,sep);
	}
	return res;
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
    int j;

	i = 0;
	if (!*src)
		return (dest);
	while (dest[i] != '\0')
		i++;
    i--;
    j = -1;
	while (++i, ++j, src[j] != '\0')
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}