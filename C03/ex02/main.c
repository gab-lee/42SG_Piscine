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

	int i;

	i = 0;
	while (i < 3)
	{
		printf("----TEST-CASE-%d----\n", i);
		printf("str2: %s\n", str[i]);
		printf("Cat: %s\n", ft_strcat(buff,str[i]));
		printf("\n-------------------\n");
		i++;
	}
	return (0);
}
