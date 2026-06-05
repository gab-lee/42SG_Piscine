/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:26:43 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/02 12:28:33 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int main(void)
{
	//---test-cases---//
	// Test Case
	char *str[] =
		{"Hello",
		 "  a b !6721839 ",
		 "\0",
		 "abcdedfg",
		 "adbv    adsf",
		 "fads 546789",
		};

	int i;

	i = 0;
	while (i < 6)
	{
		printf("----TEST-CASE-%d----\n", i);
		printf("str: %s\n", str[i]);
		printf("isvalid: %d\n", ft_str_is_lowercase(str[i]));
		printf("\n-------------------\n");
		i++;
	}
	return (0);
}
