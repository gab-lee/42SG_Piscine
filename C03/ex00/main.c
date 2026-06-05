/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 13:06:57 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/02 15:15:34 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int main(void)
{
	//---test-cases---//
	// Test Case
	char *str1[] =
		{"Hello",
		 "A", 
		 "AAB",
		};
	char *str2[] =
		{"Hello",
		 "B", 
		 "AAA",
		};

	int i;

	i = 0;
	while (i < 3)
	{
		printf("----TEST-CASE-%d----\n", i);
		printf("str1: %s\n", str1[i]);
		printf("str2: %s\n", str2[i]);
		printf("diff: %d\n", ft_strcmp(str1[i],str2[i]));
		printf("\n-------------------\n");
		i++;
	}
	return (0);
}
