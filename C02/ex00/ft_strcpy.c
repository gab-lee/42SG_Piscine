/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 09:57:03 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/03 13:15:26 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *str)
{
	char	*temp;

	temp = dest;
	while (*str != '\0')
	{
		*temp = *str;
		str++;
		temp++;
	}
	*temp = '\0';
	return (dest);
}
