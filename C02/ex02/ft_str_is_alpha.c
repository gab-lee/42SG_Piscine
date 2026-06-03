/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:28:59 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/03 14:44:36 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_char_alpha(char *c);

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (ft_is_char_alpha(str))
		{
			str++;
			continue ;
		}
		else
			return (0);
	}
	return (1);
}

int	ft_is_char_alpha(char *c)
{
	return ((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z'));
}
