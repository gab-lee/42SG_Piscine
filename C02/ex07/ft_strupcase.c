/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:28:59 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/02 12:34:10 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_uppercase(char *c);

char	*ft_strupcase(char *str)
{
	char	*temp;

	temp = str;
	while (*temp != '\0')
	{
		ft_uppercase(temp);
		temp++;
	}
	return (str);
}

void	ft_uppercase(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}
