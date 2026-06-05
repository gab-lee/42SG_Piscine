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
	int i;

	i = 0;
	while (i < 4)
	{
		printf("----TEST-CASE-%d----\n", i);
		printf("Src %s\n", src[i]);
		printf("cpy %s\n", ft_strcpy(dest,src[i]));
		printf("\n-------------------\n");
		i++;
	}
	return (0);
}

