/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:26:43 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/03 14:08:25 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	int		n;
	char	str[] = "abcd!31 2efg";
	
	printf("----TEST-CASE----\n");
	n = ft_str_is_alpha(str);
	printf("Test String: %s\n", str);
	printf("Is valid: %d\n", n);
	printf("-----------------\n");
	return (0);
}
