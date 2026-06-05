/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:15:14 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/03 17:09:53 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	//---test-cases---//
	// Test Case
	char *src[] =
		{"Hello",
		 "1234567",
		 "\0",
		 "fads7546789",
		};
	int size[] =
		{2,
		7,
		6,
		0,
		};

	int i;

	i = 0;
	while (i < 4)
	{
		char dest[99];
		printf("----TEST-CASE-%d----\n", i);
		printf("Src: %s\n", src[i]);
		printf("size: %d\n", size[i]);
		printf("len: %u\n", ft_strlcpy(dest,src[i],size[i]));
		printf("Des: %s\n", dest);
		printf("\n-------------------\n");
		i++;
	}
	return (0);
}
