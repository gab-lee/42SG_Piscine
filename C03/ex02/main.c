/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 15:42:53 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/02 15:51:09 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	//Test//
	//Test 1: mixed alpha and numeric
	char dest[] = "ab";
	char src[] = "12";
	char *result[99];
	///////
	printf("dest: %s\n",dest);
	printf("dest: %s\n",src);
	*result = ft_strcat(dest, src);
	printf("result: %s\n", *result);
	return (0);
}
