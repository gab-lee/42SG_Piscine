NAME = libft.a
CC	= cc
INC     = -Iincludes
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_putchar ft_swap ft_putstr ft_strlen ft_strcmp 
OBJ = $(addprefix srcs/, $(addsuffix .o, $(SRCS)))

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

srcs/%.o: srcs/%.c includes/ft.h
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all 

.PHONY: all clean fclean re