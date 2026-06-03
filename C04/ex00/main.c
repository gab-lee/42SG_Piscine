/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 17:23:13 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/03 17:27:54 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	//TEST 1 (11)
	char str[] = "Hello World";
	int	n = ft_strlen(str);
	printf("----TEST-CASE----\n");
	printf("TEST: %s\n",str);
	printf("Len: %d\n",n);
	printf("-----------------\n");
	return (0);
}
