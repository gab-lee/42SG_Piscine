#include <unistd.h>

int ft_char_in_str(char c, char *str);
char *ft_strcat(char *dest, char c);
int ft_get_base_len(char *base);
void ft_put_revstr(char *str);

void ft_putnbr_base(int nbr, char *base)
{
	int base_len;
	char buff[64];
	char *result;
	unsigned int	temp;

	result = buff;
	*result = '\0';
	base_len = ft_get_base_len(base);
	if (base_len <= 1)
		return;
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (nbr > -2147483648)
			temp = nbr * -1;
		else
			temp = (unsigned int)nbr;
	}
	else
		temp = nbr;
	while (temp)
	{
		ft_strcat(result, (base[temp % base_len]));
		temp = temp / base_len;
	}
	ft_put_revstr(result);
}

int ft_get_base_len(char *base)
{
	int len;

	len = 0;
	if (*base == '\0')
		return (0);
	while (*base != '\0')
	{
		if (*base == '+' || *base == '-')
			return (0);
		if (ft_char_in_str(*base, base + 1))
			return (0);
		len++;
		base++;
	}
	return (len);
}

char *ft_strcat(char *dest, char c)
{
	char *p;

	p = dest;
	while (*p != '\0')
		p++;
	*p = c;
	p++;
	*p = '\0';
	return (dest);
}

void ft_put_revstr(char *str)
{
	char	*p;

	p = str;
	while (*str != '\0')
		str++;
	str--;
	while (str != p-1)
	{
		write(1, str, 1);
		str--;
	}
}

int ft_char_in_str(char c, char *str)
{
	while (*str != '\0')
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}
