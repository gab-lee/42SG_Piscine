srcs/ft_putchar.o : srcs/ft_putchar.c
	gcc -Wall -Wextra -Werror -c srcs/ft_putchar.c -o srcs/ft_putchar.o

libft.a: srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o
	arc rcs libft.a srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o

all: libft.a

clean: 
	rm -f srcs/*.o

fclean: clean
	rm -f libft.a

re: clean all