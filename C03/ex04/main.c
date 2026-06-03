/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:57:53 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/03 15:57:57 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
    //test 1: Start of string
    //char haystack[] = "abcdef"; char needle[] = "a"; 
    //test 2: Mid String
    //char haystack[] = "abcdef"; char needle[] = "cd"; 
    //test 2: Not in String
    char haystack[] = "abcdef"; char needle[] = "xx"; 
    //
    printf("----TEST-CASE----\n");
    printf("Haystack: %s\n", haystack);
    printf("Needle: %s\n", needle);
    printf("Position: %s\n", ft_strstr(haystack, needle));
    printf("-----------------");
    return (0);
}
