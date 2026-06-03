/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 09:51:07 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/03 13:20:02 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char	*dest, char *src);

int	main(void)
{
	char	src[] = "Aa !567 ihi!"; //test case is alphanumeric including special chars
	char	dest[99];
	
	printf("\n---TEST CASE 1---\n");
	ft_strcpy(dest, src);
	printf("Src : %s\n", src);
	printf("Dest: %s\n", dest);
	printf("-----------------\n");
	return (0);
}
