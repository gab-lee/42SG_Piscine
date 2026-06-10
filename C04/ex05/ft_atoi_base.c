char *ft_parse_str(char *str, int *neg, char *base);
int ft_strlen(char *str);
int ft_validbase(char *base);
int base_index(char c, char *base);

int ft_atoi_base(char *str, char *base)
{
	long result;
	int neg;
	int base_len;
	char *parse;

	result = 0;
	neg = 0;
	parse = ft_parse_str(str, &neg, base);
	base_len = ft_strlen(base);
	if (!ft_validbase(base) || base_len < 2)
		return (0);
	else if (ft_strlen(parse) == 1 && parse[0] == base[0])
		return (0);
	while (parse && *parse)
	{
		if (base_index(*parse, base) < 0)
			break;
		result = result * base_len + base_index(*parse, base);
		parse++;
	}
	if (neg % 2)
		result = result * -1;
	return (result);
}

char *ft_parse_str(char *str, int *neg, char *base)
{
	int i;
	i = -1;
	while (++i, str[i])
	{
		if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13) || str[i] == '+')
			continue;
		else if (str[i] == '-')
			*neg = *neg + 1;
		else if (base_index(str[i], base) >= 0)
			return (&str[i]);
		else
			return (0);
	}
	return (0);
}
int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}
int ft_validbase(char *base)
{
	int i;
	int j;
	i = -1;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i;
		while (base[++j])
		{
			if (base[i] == base[j])
				return (0);
		}
	}
	return (1);
}
int base_index(char c, char *base)
{
	int i;

	i = -1;
	while (base[++i])
	{
		if (base[i] == c)
			return (i);
	}
	return (-1);
}