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

unsigned int	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		len;
	char	*p;

	len = 0;
	p = dest;
	if (!size)
		return (len);
	else
		while (*p != '\0')
			p++;
	while (*src != '\0' && size - 1)
	{
		*p = *src;
		p++;
		src++;
		size--;
		len++;
	}
	*p = '\0';
	return (len);
}
