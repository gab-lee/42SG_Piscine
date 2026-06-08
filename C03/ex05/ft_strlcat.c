/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 15:39:33 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/03 17:11:33 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int 	i;

	len = 0;
	i = 0;
	if (size == 0)
		return (len);
	else
		while (dest[len] != '\0' && len < size)
			len++;
	if (size >= len)
	{
		while (src[i] != '\0' && len < (size - 1))
		{
			dest[len] = src[i];
			len++;
			i++;
		}
		dest[len] = '\0';
	}
	else 
		len = size;
	while (src[i] != '\0' && len < size)
		{
			len++;
			i++;
		}
	return (len);
}
