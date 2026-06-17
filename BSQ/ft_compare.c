/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 13:39:09 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/16 14:00:00 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_compare(int top, int left, int top_left, int *cur)
{
	int	min;

	if (*cur == 0)
		return ;
	if (top < left)
		min = top;
	else
		min = left;
	if (top_left < min)
		min = top_left;
	*cur = min + 1;
}
