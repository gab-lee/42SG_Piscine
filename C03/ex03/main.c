/* ************************************************************************** */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	//---test-cases---//
	// Test Case
	char buff[50];
	char *str[] =
		{"Hello",
		 "B", 
		 "AAA",
		};
	int n[] =
		{1,
		 0, 
		 3,
		};
	int i;

	i = 0;
	while (i < 3)
	{
		printf("----TEST-CASE-%d----\n", i);
		printf("str: %s\n", str[i]);
		printf("n: %d\n", n[i]);
		printf("Cat: %s\n", ft_strncat(buff,str[i],n[i]));
		printf("\n-------------------\n");
		i++;
	}
	return (0);
}
