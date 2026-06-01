/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:28:59 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/01 16:25:19 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_is_char_alpha_numeric(char *c)
{
	if ((*c >= 'a' && *c <= 'z') || (*c >= 'A'& *c <= 'Z'))
		return (1);
	if (*c >= '0' && *c <= '9')
		return (1);
	else
		return (0);
}

void	ft_char_low_uppercase(char *c)
{
	if (*c >= 'a' && *c <= 'z')
	{
		*c = *c - 32;
	}
}

void	ft_char_up_lowercase(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
	{
		*c = *c + 32;
	}
}

int	ft_strcapitalize(char *str)
{
	int	cap;

	cap = 1;
	while (*str != '\0')
	{
		if (ft_is_char_alpha_numeric(str))
		{	
			if (cap)
			{
				ft_char_low_uppercase(str);
				cap = 0;
			}
			else 
				ft_char_up_lowercase(str);
		}
		else
			cap = 1;
		str++;
	}
	return (1);
}
