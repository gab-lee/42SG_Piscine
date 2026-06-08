/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:18:55 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/08 09:35:53 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *str, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 2147483647)
		return (dest);
	while (str[i] != '0' && i < n)
	{
		dest[i] = str[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
