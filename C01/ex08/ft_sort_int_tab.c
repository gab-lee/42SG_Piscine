#include <unistd.h>

void    ft_swap(int *a, int *b)
{
        int     c;
        int     d;

        c = *a;
        d = *b;
        *a = d;
        *b = c;
}

int	ft_isbigger(int *a, int *b)
{
	if (*a > *b)
	{
		return (1);
	}
	else
	{
		return(0);
	}
}

void	ft_max_pos(int *tab, int sort_size, int *pos_max)
{
	int	cur_pos;
	
	*pos_max = 0;
	cur_pos = 0;
	while (cur_pos < sort_size)
	{
		if (ft_isbigger(tab + cur_pos, tab + *pos_max))
		{
			*pos_max = cur_pos;
		}
		cur_pos++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	pos_max;
	int	sort_size;

	pos_max = 0;
	sort_size = size;
	while (sort_size > 1)
	{
		ft_max_pos(tab, sort_size, &pos_max);
		ft_swap(tab + pos_max, tab + sort_size -1);
		sort_size = sort_size -1;
	}
}
