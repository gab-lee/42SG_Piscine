/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:28:59 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/03 15:20:19 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_char_alpha_numeric(char *c);
void	ft_lowercase(char *c);
void	ft_uppercase(char *c);

char	*ft_strcapitalize(char *str)
{
	int		cap;
	char	*temp;

	temp = str;
	cap = 1;
	while (*temp != '\0')
	{
		if (ft_is_char_alpha_numeric(temp))
		{
			if (cap)
				ft_uppercase(temp, *cap);
			else
				ft_char_up_lowercase(temp);
		}
		else
			cap = 1;
		temp++;
	}
	return (str);
}

void	ft_uppercase(char *c, int *cap)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	*cap = 0;
}

void	ft_lowercase(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

int	ft_is_char_alpha_numeric(char *c)
{
	if ((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z'))
		return (1);
	if (*c >= '0' && *c <= '9')
		return (1);
	else
		return (0);
}
