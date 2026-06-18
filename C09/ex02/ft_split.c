/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 12:44:10 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/15 12:41:02 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_count_words(char *str, int *str_len, int *words, char *charset);
void	ft_fill_array(char **array, char *str, char *charset);
int		ft_in_charset(char c, char *charset);
char	**ft_allocate_array(int words, int str_len, int error);

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		words;
	int		str_len;

	str_len = 0;
	words = 0;
	if (!str || !str[0])
	{
		array = ft_allocate_array(1, 1, 1);
		return (array);
	}
	if (!charset)
	{
		array = malloc((2) * sizeof(char *));
		if (!array)
			return (NULL);
		array[0] = str;
		array[1] = NULL;
		return (array);
	}
	ft_count_words(str, &str_len, &words, charset);
	array = ft_allocate_array(words, str_len, 0);
	if (array)
		ft_fill_array(array, str, charset);
	return (array);
}

char	**ft_allocate_array(int words, int str_len, int error)
{
	char	**array;
	int		i;

	i = -1;
	if (!words || error)
	{
		array = malloc((1) * sizeof(char *));
		array[0] = NULL;
		return (array);
	}
	array = malloc((words + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	while (++i, i < words + 1)
	{
		array[i] = malloc((str_len + 1) * sizeof(char));
		if (!array[i])
			return (NULL);
		array[i][0] = '\0';
	}
	return (array);
}

void	ft_count_words(char *str, int *str_len, int *words, char *charset)
{
	int	i;
	int	space;
	int	temp;

	i = -1;
	space = 1;
	temp = 0;
	while (++i, 1)
	{
		if (!str[i] || ft_in_charset(str[i], charset))
		{
			if (!space && i - temp > *str_len)
				*str_len = i - temp;
			if (!str[i])
				break ;
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

void	ft_fill_array(char **array, char *str, char *charset)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	j = -1;
	k = 0;
	while (++i, 1)
	{
		if (!str[i] || ft_in_charset(str[i], charset))
		{
			if (j >= 0 && k > 0)
				array[j][k] = '\0';
			k = 0;
			if (!str[i])
				break ;
		}
		else
		{
			if (k == 0)
				j++;
			array[j][k++] = str[i];
		}
	}
	array[j + 1] = NULL;
}

int	ft_in_charset(char c, char *charset)
{
	int	i;

	i = -1;
	while (++i, charset[i])
	{
		if (charset[i] == c)
			return (1);
	}
	return (0);
}
