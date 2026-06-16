/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 10:57:54 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/16 10:11:33 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_raise_error(void);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		len;

	len = 0;
	i = -1;
	if (size <= 0)
		ft_raise_error();
	while (++i < size)
		len = len + ft_strlen(strs[i]);
	len = len + (ft_strlen(sep) * size - 1);
	if (len <= 0)
		ft_raise_error();
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		ft_raise_error();
	res[0] = '\0';
	i = -1;
	while (++i < size)
	{
		ft_strcat(res, strs[i]);
		if (i != size - 1)
			ft_strcat(res, sep);
	}
	return (res);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

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

char	*ft_raise_error(void)
{
	char	*res;

	res = malloc(1 * sizeof(char));
	res[0] = '\0';
	return (res);
}
