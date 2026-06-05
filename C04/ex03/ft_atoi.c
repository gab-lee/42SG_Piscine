/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:18:59 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/05 16:19:01 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rm_not_nbr(char *str, int *neg);

int	ft_atoi(char *str)
{
	int	result;
	int	neg;
	
	result = 0;
	neg = 0;
	str = ft_rm_not_nbr(str, &neg);
	if(!str)
		return (result);
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	if (neg % 2 == 1)
		result = result * -1;
	return (result);
}

char	*ft_rm_not_nbr(char *str, int *neg)
{
	int	whitespace;

	whitespace = 1;
	while (*str != '\0' && !(*str >= '0' && *str <= '9'))
	{
		if (*str != ' ' && *str != '+' && *str != '-')
			return 0;
		if (*str == ' ' && !whitespace)
			return 0;
		if (*str == '-')
		{
			whitespace = 0;
			(*neg)++;
		}
		str++;		
	}
	return (str);
}
