/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:28:59 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/03 15:15:10 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_char_printable(char *c);

int	ft_str_is_printable(char *str)
{
	while (*str != '\0' && ft_is_char_printable(str))
		str++;
	return ((*str == '\0'));
}

int	ft_is_char_printable(char *c)
{
	return ((*c >= 32 && *c <= 126));
}
