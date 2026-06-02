/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 15:13:52 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/02 15:38:12 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while ((*s1 != '\0' || *s2 != '\0') && n-1)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			n--;
			continue ;
		}
		else
			return (*s1 - *s2);
	}
	return (*s1 - *s2);
}
