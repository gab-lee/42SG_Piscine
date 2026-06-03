/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:15:14 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/03 17:09:53 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	int		size;
	char	src[] = "abc321321de";
	char	dest[99];
	int		len;

	size = 6;
	len = ft_strlcpy(dest, src, size);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("Size: %d\n", size);
	printf("Length: %d\n", len);
	return (0);
}
