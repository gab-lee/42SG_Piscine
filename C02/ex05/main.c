/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:26:43 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/02 12:29:49 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int main(void)
{
	//---test-cases---//
	// Test Case
	char *str[] =
		{"Hello",
		 "  a b !6721839 ",
		 "\0",
		 "FASFSAFFASDSA",
		 "ASDFSA    ASDAS",
		 "fads 546789",
		};

	int i;

	i = 0;
	while (i < 6)
	{
		printf("----TEST-CASE-%d----\n", i);
		printf("str: %s\n", str[i]);
		printf("isvalid: %d\n", ft_str_is_uppercase(str[i]));
		printf("\n-------------------\n");
		i++;
	}
	return (0);
}
