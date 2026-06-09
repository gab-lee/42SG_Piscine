#ifndef ft_h
# define ft_h

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
        i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
    int i;

    i = -1;
	while (++i, s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
    }
	return (s1[i] - s2[i]);
}

void	ft_swap(int *a, int*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

#endif