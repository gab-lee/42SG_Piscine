/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 16:23:45 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/08 16:47:16 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strdup(char *c);

int	main(void)
{
	int i;
	char *str[] = {
			"Hello",
			"Hi",
			"1234",
			NULL
			};
	
	i = -1;
	while (++i, str[i]!=NULL)
	{
		printf("TEST %d\n",i);
		printf("str: %s\n",str[i]);
		printf("strdup: %s\n",strdup(str[i]));
		printf("ft_strdup: %s\n",ft_strdup(str[i]));
	}
}
