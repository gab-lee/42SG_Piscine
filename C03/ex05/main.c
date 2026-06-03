/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 15:42:53 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/03 16:18:15 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlcat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	//Test//
	//Test 1: mixed alpha and numeric
	char dest[] = "abc";
	char src[] = "123456";
	unsigned int	nb = 10;
	char *result[99];
	///////
	printf("dest: %s\n", dest);
	printf("dest: %s\n", src);
	*result = ft_strlcat(dest, src, nb);
	printf("result: %s\n", *result);
	return (0);
}
