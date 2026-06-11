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
#include <stdlib.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(void)
{
    char *nbr = "ff";
    char *base_from = "0123456789abcdef";
    char *base_to = "01";
    char *new_nbr;

    new_nbr = ft_convert_base(nbr, base_from, base_to);
    printf("nbr: %s", new_nbr);
    free(new_nbr);
    return (0);
}