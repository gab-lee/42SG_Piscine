/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:33:55 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/09 12:43:35 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (!(ft_validbase(base_from) && ft_validbase(base_to && ft_validnbr(nbr))))
		return NULL;
	return (base_to((ft_atoi_base(nbr,base_from)));
}

int	ft_validbase(char *base)
{
	//validity check
	if (//checks)
		return (0);
	return (1);
}

int	ft_validnbr(char * nbr)
{
	//validity check
	if (//checks)
		return (0);
	return (1);
}
