/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 13:06:57 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/02 15:08:56 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	//testing
	//test case 1: empty string
	//char	s1[] = "";
	//char	s2[] = "";
	//test case 2: Characters 1 apart
	//char	s1[] = "A";
	//char	s2[] = "B";
	//test case 3: Same char diff length
	//char	s1[] = "AAAAA";
	//char	s2[] = "A";
	//test case 4: diff char diff length
	char	s1[] = "AB";
	char	s2[] = "AAA";
	//
	int	n = ft_strcmp(s1,s2);
	printf("S1: %s\n",s1);
	printf("S2: %s\n",s2);
	printf("value: %d",n);
	return (0);
}
