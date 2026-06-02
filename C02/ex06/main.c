/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:26:43 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/02 12:31:23 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	//char	str[]="abcd!!!efg"; //mix of printable characters
	char	str[2];
	str[0] = 1; //non priintable character
	str[1] = 79;

	int n = ft_str_is_printable(str);
	printf("Test string: %s\n", str);
	printf("Is printable? %d\n", n);
	return (0);
}
