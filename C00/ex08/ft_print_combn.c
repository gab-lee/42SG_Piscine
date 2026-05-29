/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 15:24:29 by gabrlee           #+#    #+#             */
/*   Updated: 2026/05/29 15:55:32 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_ceiling(int *ceiling, int n)
{
	while(n)
	{
		*ceiling = *ceiling *10;
		*ceiling = *ceiling + 9;
		n = n -1;
	}
}

int	ft_validnbr(char *c, int n)
{
	int	count;
	count = 0;
	while (count < n -1)
	{
		if(*c[count] > *c[count +1])
		{
			return 0;
		}
		count ++;
	}	
	return 1;
}

void	ft_converttochar(int n, char *c, int a)
{
	int	count;
	count = 0;
	while (n)
	{
		*c[count] = 
		n = n -1;
	}
}

void	ft_print_combn(int n)
{
	char 	c[n];
	int	ceiling;
	int	a;
	int	valid;
	a = 0;
	ceiling = 0;
	ft_ceiling(&ceiling, n);
	while(a <= ceiling)
	{
		ft_converttochar(n,&c);	
		valid = ft_validnbr(&cc,n);
		if (valid)
		{
			printf("%d",a);
			a ++;	
		}
	}

}
