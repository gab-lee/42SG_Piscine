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

static void run_test(char *label, char *nbr, char *base_from, char *base_to, char *expected)
{
    char *result;

    result = ft_convert_base(nbr, base_from, base_to);
    printf("[%s]\n  input:    \"%s\"\n  expected: %s\n  result:   %s\n  %s\n\n",
        label, nbr,
        expected ? expected : "NULL",
        result ? result : "NULL",
        (result && expected && !__builtin_strcmp(result, expected)) || (!result && !expected) ? "PASS" : "FAIL");
    free(result);
}

int main(void)
{
    run_test("normal decimal to binary", "42", "0123456789", "01", "101010");
    run_test("normal binary to decimal", "101010", "01", "0123456789", "42");
    run_test("negative number", "-42", "0123456789", "01", "-101010");
    run_test("zero", "0", "0123456789", "01", "0");
    run_test("leading whitespace", "  42", "0123456789", "01", "101010");
    run_test("leading plus", "+42", "0123456789", "01", "101010");
    run_test("double negative", "--42", "0123456789", "01", "101010");
    run_test("invalid base_from single char", "42", "0", "01", NULL);
    run_test("invalid base_to single char", "42", "0123456789", "0", NULL);
    run_test("invalid base_from has plus", "42", "0+23456789", "01", NULL);
    run_test("invalid base_to has minus", "42", "0123456789", "0-", NULL);
    run_test("invalid base_from has duplicate", "42", "00123456789", "01", NULL);
    run_test("invalid base_to has whitespace", "42", "0123456789", "0 1", NULL);
    run_test("hex to decimal", "2a", "0123456789abcdef", "0123456789", "42");
    run_test("decimal to hex", "255", "0123456789", "0123456789abcdef", "ff");
    run_test("nbr has invalid char for base", "29", "01", "0123456789", NULL);
    return (0);
}