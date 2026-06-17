CC	= cc
CFLAGS = -Wall -Werror -Werror

srcs/ft_putchar.o : srcs/ft_putchar.c includes/ft.h

	gcc -Wall -Wextra -Werror -Iincludes -c srcs/ft_putchar.c -o srcs/ft_putchar.o
	
srcs/ft_swap.o : srcs/ft_swap.c includes/ft.h
	@echo "Compiling ft_swap.c"
	gcc -Wall -Wextra -Werror -Iincludes -c srcs/ft_swap.c -o srcs/ft_swap.o

srcs/ft_putstr.o : srcs/ft_putstr.c includes/ft.h
	@echo "Compiling ft_putstr.c"
	gcc -Wall -Wextra -Werror -Iincludes -c srcs/ft_putstr.c -o srcs/ft_putstr.o

srcs/ft_strlen.o : srcs/ft_strlen.c includes/ft.h
	@echo "Compiling ft_strlen.c"
	gcc -Wall -Wextra -Werror -Iincludes -c srcs/ft_strlen.c -o srcs/ft_strlen.o

srcs/ft_strcmp.o : srcs/ft_strcmp.c includes/ft.h
	@echo "Compiling ft_strcmp.c"
	gcc -Wall -Wextra -Werror -Iincludes -c srcs/ft_strcmp.c -o srcs/ft_strcmp.o

libft.a: srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o
	@echo "Archiving into libft.a"
	ar rcs libft.a srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o

all: libft.a

clean: 
	@echo "Removing objects files froms srcs/"
	rm -f srcs/*.o

fclean: clean
	@echo "Removing libft.a"
	rm -f libft.a

re: clean all 