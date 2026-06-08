/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 15:42:53 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/08 10:10:25 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	//Test//
	//Test 1: mixed alpha and numeric
	char dest[] = "abc";
	char src[] = "123456";
	unsigned int	nb = 2;
	unsigned int result;
	///////
	printf("dest: %s\n", dest);
	printf("src: %s, size  %d\n", src,nb);
	result = ft_strlcat(dest, src, nb);
	printf("result: %d\n", result);
	printf("dest: %s\n", dest);
	return (0);
}
