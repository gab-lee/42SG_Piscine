/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 16:09:22 by gabrlee           #+#    #+#             */
/*   Updated: 2026/05/30 16:19:01 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {1,2,3,4,5};
	int size =5;
	ft_rev_int_tab(tab,size);
	for(int i=0; i<size; i++)
	{
		printf("%d",tab[i]);
	}
	return (0);
}
