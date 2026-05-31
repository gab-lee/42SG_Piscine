#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	size;
	int tab[] = {10,2,30,40,7};

	size = 5;
	ft_sort_int_tab(tab, size);
	for (int i =0; i<size; i++)
	{
		printf("%d",tab[i]);
		write(1,",",1);
	}
	return (0);
}
