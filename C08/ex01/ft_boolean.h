/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 16:34:02 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/15 16:57:19 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;

# define TRUE 1
# define FALSE 0
# define EVEN(nbr)	(((nbr) % 2) == 0)
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0

#endif
