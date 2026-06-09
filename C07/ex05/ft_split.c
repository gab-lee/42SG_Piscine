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

char **ft_split(char *str, char *charset)
{
	int i;
	int n_substrings;
	char **strs;

	i = 0;
	n_substrings = 0;
	while (charset[i] != '\0')
		n_substrings = n_substring + ft_fchar(str, charset[i]);
	strs = malloc(n_substrings * sizeof(char *));
	//should consider recurssioin.

	strs[i] = NULL;

}

int	ft_strlen(char *str)
{
	//returns the length of str
}

int ft_fchar(char *str, char c)
{
	//returns the number of time c happens in str
}
