/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 12:44:10 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/09 13:11:56 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void ft_count_words(char *str, int *str_len, int *words);
void ft_fill_array(char ***array, char *str);

char **ft_split(char *str, char *charset)
{
	char **array;
	int i;
	int array_len;
	int str_len;

	i = -1;
	str_len = 0;
	array_len = 0;
	ft_count_words(str, &str_len, &array_len);
	if (!array_len)
		return (NULL);
	array = malloc((array_len + 1) * sizeof(char *));
	while (++i, i < array_len + 1)
		array[i] = malloc((str_len + 1) * sizeof(char));
	ft_fill_array(&array, str);
	return (array);
}

void ft_count_words(char *str, int *str_len, int *words)
{
	int i;
	int space;
	int temp;

	i = -1;
	space = 1;
	temp = 0;
	while (++i, 1)
	{
		if (!str[i] || str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		{
			if (i - temp > *str_len)
				*str_len = i - temp;
			if (!str[i])
				break;
			space = 1;
		}
		else if (space)
		{
			space = 0;
			(*words)++;
			temp = i;
		}
	}
}
void ft_fill_array(char ***array, char *str)
{
	int i;
	int j;
	int k;
	int space;

	i = -1;
	j = -1;
	k = 0;
	space = 1;
	while (str[i])
	{
		if (!str[i] || str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		{
			space = 1;
			k = 0;
		}
		else if (space)
		{
			space = 0;
			j++;
			*array[j][k] = str[i];
		}
		else
		{
			k++;
			*array[j][k] = str[i];
		}
	}
}
