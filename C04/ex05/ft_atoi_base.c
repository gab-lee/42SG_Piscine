char *ft_rm_not_nbr(char *str, int *neg);
int ft_nbr_base(int nbr, char *base);

int ft_atoi_base(char *str, char base)
{
	int result;
	int neg;

	result = 0;
	neg = 0;
	str = ft_rm_not_nbr(str, &neg);
	if (!str)
		return (result);
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	if (neg % 2 == 1)
		result = result * -1;
	return (ft_nbr_base(result, base));
}

char *ft_rm_not_nbr(char *str, int *neg)
{
	int whitespace;

	whitespace = 1;
	while (*str != '\0' && !(*str >= '0' && *str <= '9'))
	{
		if (*str != ' ' && *str != '+' && *str != '-')
			return 0;
		if (*str == ' ' && !whitespace)
			return 0;
		if (*str == '-')
		{
			whitespace = 0;
			(*neg)++;
		}
		str++;
	}
	return (str);
}

int ft_nbr_base(int nbr, base);