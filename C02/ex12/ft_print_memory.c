#include <stdio.h>

void *ft_print_memory(void *addr, unsigned int size)
{
	unsigned long long_addr;
	unsigned char *str;
	long_addr = (unsigned long)addr;
	str = (unsigned char*)addr;
	printf("print memory (HEX) %lx\n", long_addr);
	//printf("print memory %lu\n", long_addr);
	//printf("print memory %s\n", str);
	int i;
	i = 0;
	while (i < size)
	{
		printf("%02x\n", str[i]);
		i++;
	}

	return (addr);
}