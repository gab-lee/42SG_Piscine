/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:28:59 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/03 15:15:54 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *c);

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0' && ft_is_char_uppercase(str))
		str++;
	return ((*str == '\0'));
}

int	ft_is_char_uppercase(char *c)
{
	return ((*c >= 'A' && *c <= 'Z'));
}
