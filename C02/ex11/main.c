/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:26:43 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/02 12:42:33 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int main(void)
{
	//---test-cases---//
	// Test Case
		char str[] = "Hello\nHow are you?";
		//char str[6];
		//str[0] = 2;
		//str[1] = 65; //A
		//str[2] = 127;//del
		//str[3] = 102;
		//str[4] = 77;
		//str[5] = '\0';
		printf("----TEST-CASE-0----\n");
		ft_putstr_non_printable(str);
		printf("\n-------------------\n");
	return (0);
}