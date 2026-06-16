/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:18:35 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/09 11:21:07 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
    char *str;
    int size;
    char *arr[] = {"", "", ""};
    char *sep;

    size = 3;
    sep = ", ";
    str = ft_strjoin(size, arr, sep);
    printf("str: %s\n", str);
}