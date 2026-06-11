/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:33:55 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/09 12:43:35 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str);
int ft_validbase(char *base);
void ft_strnbr_long_base(long nbr, char *base, int base_len, char *str);
int base_index(char c, char *base);
char *ft_parse_str(char *str, int *neg, char *base);
int ft_str_size(int nbr, int base_len);
void ft_strnbr_base(int nbr, char *base, char **str);
int ft_atoi_base(char *str, char *base);

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int n;
	char *str;

	n = ft_atoi_base(nbr, base_from);
	if (nbr == 0)
	{
		str = malloc(2 * sizeof(char));
		str[0] = base_to[0];
		str[1] = '\0';
		return (str);
	}
	ft_strnbr_base(n, base_to, &str);
	return (str);
}

void ft_strnbr_base(int nbr, char *base, char **str)
{
	int base_len;
	int str_size;

	base_len = ft_strlen(base);
	if (!ft_validbase(base) || base_len < 2)
		str = NULL;
	str_size = ft_str_size(nbr, base_len);
	*str = malloc(str_size * sizeof(char));
	(*str)[str_size - 1] = '\0';
	if (nbr < 0)
	{
		(*str)[0] = '-';
		ft_strnbr_long_base((long)-nbr, base, base_len, str + str_size - 2);
	}
	else
		ft_strnbr_long_base((long)nbr, base, base_len, str + str_size - 2);
}

int ft_atoi_base(char *str, char *base)
{
	long result;
	int neg;
	int base_len;
	char *parse;

	result = 0;
	neg = 0;
	parse = ft_parse_str(str, &neg, base);
	base_len = ft_strlen(base);
	if (!ft_validbase(base) || base_len < 2)
		return (0);
	else if (ft_strlen(parse) == 1 && parse[0] == base[0])
		return (0);
	while (parse && *parse)
	{
		if (base_index(*parse, base) < 0)
			break;
		result = result * base_len + base_index(*parse, base);
		parse++;
	}
	if (neg % 2)
		result = result * -1;
	return (result);
}
int ft_str_size(int nbr, int base_len)
{
	int i;

	i = 0;
	if (nbr < 0)
		i++;
	while (++i, nbr)
		nbr = nbr / base_len;
	return (i + 1);
}