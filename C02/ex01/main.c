/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:15:14 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/08 09:49:45 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	//---test-cases---//
	// Test Case
	char dest[99];
	char *src[] =
		{"Hello",
		 "123456789",
		 "\0",
		 "fads 546789",
		};
	int n[] =
		{6,
		7,
		6,
		0,
		};

	int i;

	i = 0;
	while (i < 4)
	{
		printf("----TEST-CASE-%d----\n", i);
		printf("Src: %s\n", src[i]);
		printf("n: %d\n", n[i]);
		ft_strncpy(dest,src[i],n[i]);
		printf("Dest: %s\n", dest);
		printf("\n-------------------\n");
		i++;
	}
	return (0);
}
