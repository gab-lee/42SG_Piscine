/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:18:55 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/03 14:44:07 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *str, unsigned int n)
{
	char	*p;

	p = dest;
	if (!n)
		return (dest);
	while (n && *str != '0')
	{
		*p = *str;
		str++;
		p++;
		n--;
	}
	while (n)
	{
		*p = '\0';
		p++;
		n--;
	}	
	return (dest);
}
