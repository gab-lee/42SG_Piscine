#include <stdio.h>
char	*ft_rm_not_nbr(char *str, int *is_pos);

int	ft_atoi(char *str)
{
	int	result;
	int	is_pos;
	
	result = 0;
	is_pos = 1;
	str = ft_rm_not_nbr(str, &is_pos);
	if(!str)
		return (result);
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		if (!result)
			result += (*str - '0');
		else
			result = result * 10 + (*str - '0');
		str++;
	}
	if (!is_pos)
		result = result * -1;
	return (result);
}

char	*ft_rm_not_nbr(char *str, int *is_pos)
{
	int	whitespace;

	whitespace = 1;
	while (*str != '\0' && !(*str >= '0' && *str <= '9'))
	{
		if (*str != ' ' && *str != '+' && *str != '-')
			return 0;
		if (*str == ' ' && !whitespace)
			return 0;
		if (*str == '-' || *str == '+')
			whitespace = 0;
			*is_pos = *is_pos + (44 - *str);
		str++;		
	}
	return (str);
}
