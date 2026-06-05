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

int main(void)
{
	//---test-cases---//
	// Test Case
	char dest[99];
	char *src[] =
		{"Hello",
		 "  a b !6721839 ",
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
		printf("cpy %s\n", ft_strncpy(dest,src[i],n[i]));
		printf("\n-------------------\n");
		i++;
	}
	return (0);
}
