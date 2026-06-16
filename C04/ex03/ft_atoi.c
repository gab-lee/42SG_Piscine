/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:18:59 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/16 14:55:19 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_parse_str(char *str, int *neg);

int	ft_atoi(char *str)
{
	long	result;
	int		neg;
	char	*parse;

	result = 0;
	neg = 0;
	parse = ft_parse_str(str, &neg);
	while (parse && *parse)
	{
		if (*parse < '0' || *parse > '9')
			break ;
		result = result * 10 + (*parse - '0');
		parse++;
	}
	if (neg % 2)
		result = result * -1;
	return (result);
}

char	*ft_parse_str(char *str, int *neg)
{
	int	i;

	i = -1;
	while (++i, str[i])
	{
		if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13) || str[i] == '+')
			continue ;
		else if (str[i] == '-')
			*neg = *neg + 1;
		else if (str[i] >= '0' && str[i] <= '9')
			return (&str[i]);
		else
			return (0);
	}
	return (0);
}
