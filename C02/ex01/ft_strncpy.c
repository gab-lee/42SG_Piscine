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

void	ft_add_null(char *p, unsigned int n);

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
	ft_add_null(p, n);
	return (dest);
}

void	ft_add_null(char *p, unsigned int n)
{
	if (!n)
		*p = '\0';
	while (n)
	{
		*p = '\0';
		p++;
		n--;
	}
}
