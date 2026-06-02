/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:26:43 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/02 12:09:31 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_putstr_non_printable(char *str);

int	main(void)
{
	//char str[]="abcd!!!efg"; //mix of printable characters
	char str[4];
	str[0] = 1; //non priintable character
	str[1] = 65; //A
	str[2] = 127; //delete key
	str[3] = 88; //X

	printf("Test string: %s\n",str);
	ft_putstr_non_printable(str);
	return (0);
}
