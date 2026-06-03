/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:28:59 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/03 15:16:33 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_char_lowercase(char *c);

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0' && ft_is_char_lowercase(str))
		str++;
	return (*str == '\0');
}

int	ft_is_char_lowercase(char *c)
{
	return ((*c >= 'a' && *c <= 'z'));
}
