/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:28:59 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/03 15:18:28 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lowercase(char *c);

char	*ft_strlowcase(char *str)
{
	char	*temp;

	temp = str;
	while (*temp != '\0')
	{
		ft_lowercase(*temp);
		temp++;
	}
	return (str);
}

void	ft_lowercase(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}
