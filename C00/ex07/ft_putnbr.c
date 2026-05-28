/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 17:12:29 by gabrlee           #+#    #+#             */
/*   Updated: 2026/05/28 18:01:12 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	size;
	int	a;
	char	output;
	
	size = 0;
	a = nb;
	while(a)
	{
		a = a / 10;
		size ++;	
	}
	output = nb + '0';
	write(1,&output,size);
	output = 
}
