/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:34:15 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/03 15:57:47 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_needle_in_haystack(char *needle, char *haystack);

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*to_find == *str && ft_needle_in_haystack(to_find, str))
			return (str);
		else
			str++;
	}
	return (0);
}

int	ft_needle_in_haystack(char *needle, char *haystack)
{
	while (*needle == *haystack)
	{
		needle++;
		haystack++;
	}
	if (*needle == '\0')
		return (1);
	else
		return (0);
}
