/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:15:14 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/03 13:58:32 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	unsigned int	n;
	char	dest[99];
	char *p = dest;
	
	printf("\n---TEST-CASE---\n");
	//n = 5; char src[] = "abcdef"; //shorter than src 
	//n = 10; char src[] = "abcdef"; //longer than src
	n = 0; char src[] = "abcdef"; //0
	ft_strncpy(dest, src, n);
	printf("n   : %d\n", n);
	printf("Src : %s\n", src);
	printf("Dest: %s\n", dest);
	printf("Dest: \n");
	while (n)
	{
		if(*p == '\0')
			write(1,"0",1); 
		else
			write(1,p,1);
		p++; n--;
	}
	printf("\n---------------\n");
	return (0);
}
