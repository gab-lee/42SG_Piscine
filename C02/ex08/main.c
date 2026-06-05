/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:26:43 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/02 12:35:28 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	//---test-cases---//
	// Test Case
	char Buff[99];
	char *str;
	str = Buff;
	Buff[0] = 'A';
	Buff[1] = 'a';
	Buff[2] = ' ';
	Buff[3] = 'b';
	int i;

	i = 0;
	while (i < 1)
	{
		printf("----TEST-CASE-%d----\n", i);
		printf("str: %s\n", str);
		printf("upper: %s\n", ft_strlowcase(str));
		printf("\n-------------------\n");
		i++;
	}
	return (0);
}
