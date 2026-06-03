/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 17:23:13 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/03 17:31:33 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_putstr(char *str);

int	main(void)
{
	//TEST 1 
	char str[] = "Hello World";
	//
	printf("----TEST-CASE----\n");
	printf("TEST: %s\n",str);
	ft_putstr(str);
	printf("\n-----------------\n");
	return (0);
}
