/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:18:55 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/03 16:19:35 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 2147483647)
		return (i);
	while (str[i] != '\0' &&  i < (size -1))
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
