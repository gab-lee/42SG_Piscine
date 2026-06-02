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

int	main(void)
{
	int		n;
	//char	str[]="abcdefg"; //only lower
	//char	str[] = "ABCDEFG"; //only uppper
	//char	str[] = "!@#$%^&*"; //special characters
	char	str[] = "abCDEDvdas"; //mix of characters
	
	n = ft_str_is_uppercase(str);
	printf("testcase: %s \n", str);
	printf("Is Upper?: %d \n", n);
	return (0);
}
