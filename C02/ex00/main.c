/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 09:51:07 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/01 11:32:52 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char	*dest, char *src);

int	main(void)
{
	char	src[]="hihi!";
	char	dest[6];

	ft_strcpy(dest, src);
	printf("Src: %s\n",src);
	printf("Dest: %s\n",dest);
	return (0);
}
