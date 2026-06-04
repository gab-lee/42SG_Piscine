#include <unistd.h>

int ft_get_base_len(char *base);
char *ft_strcat(char *dest, char *src);
void ft_putstr(char *str);

void ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	int		pos;
	char	*result;

	pos = 1;
	base_len = ft_get_base_len(base);
	if (!base_len)
		return;
	if (nbr == 0)
		return (base[0]);
	if (nbr < 0)
	{
		pos = -1;
		write(1,"-",1);
	}
	while (nbr) 
	{
		result = ft_strcat(result, ('0' + (nbr % base_len) * pos);
		nbr = nbr / base_len;
	}
	ft_putstr(result);
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
	return len;
}

char *ft_strcat(char *dest, char c)
{
	char *p;

	p = dest;
	while (*p != '\0')
		p++;
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}

void ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int ft_char_in_str(char c, char *str)
{
	while (*str != '\0')
	{	
		if(*str == c)
			return (1);
		str++;
	}
	return (0);
}
