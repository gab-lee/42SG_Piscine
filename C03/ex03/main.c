* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 15:42:53 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/02 15:57:07 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src);

int	main(void)
{
	//Test//
	//Test 1: mixed alpha and numeric
	char dest[] = "ab";
	char src[] = "12";
	unsigned int	n = 1;
	char *result[99];
	///////
	printf("dest: %s\n",dest);
	printf("dest: %s\n",src);
	*result = ft_strncat(dest, src, n);
	printf("result: %s\n", *result);
	return (0);
}
