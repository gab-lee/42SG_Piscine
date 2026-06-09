/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:16:56 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/09 13:18:28 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft.h"
#include <stdio.h>

int main(void)
{
    // ft_putchar
    ft_putchar('A');
    ft_putchar('\n');

    // ft_putstr
    ft_putstr("hello world");
    ft_putchar('\n');

    // ft_strlen
    printf("%d\n", ft_strlen("hello"));      // expected: 5
    printf("%d\n", ft_strlen(""));           // expected: 0

    // ft_strcmp
    printf("%d\n", ft_strcmp("abc", "abc")); // expected: 0
    printf("%d\n", ft_strcmp("abc", "abd")); // expected: negative
    printf("%d\n", ft_strcmp("abd", "abc")); // expected: positive

    // ft_swap
    int a = 3;
    int b = 7;
    ft_swap(&a, &b);
    printf("a=%d b=%d\n", a, b);            // expected: a=7 b=3

    return 0;
}
