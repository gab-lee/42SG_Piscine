/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:33:55 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/09 12:43:35 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(void)
{
    printf("%s\n", ft_convert_base("ff", "0123456789abcdef", "01"));
    printf("%s\n", ft_convert_base("1010", "01", "0123456789"));
    printf("%s\n", ft_convert_base("-ff", "0123456789abcdef", "0123456789"));
    printf("%s\n", ft_convert_base("42", "0123456789", "0123456789abcdef"));
    return (0);
}