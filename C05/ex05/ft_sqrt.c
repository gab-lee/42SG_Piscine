/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 15:34:08 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/09 15:34:17 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	if (nb <= 0)
		return (0);
	while ((root * root) <= nb)
	{
		if (root * root == nb)
			return (root);
		root++;
	}
	return (0);
}
