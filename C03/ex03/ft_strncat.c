/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 15:39:33 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/03 13:39:17 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*p;

	p = dest;
	while (*p != '\0')
		p++;
	while (*src != '\0' && nb > 0)
	{
		*p = *src;
		p++;
		src++;
		nb--;
	}
	*p = '\0';
	return (dest);
}
