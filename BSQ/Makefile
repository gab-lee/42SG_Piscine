NAME	= bsq

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= main.c \
		  sav_stdin.c \
		  solve_map.c \
		  red_hdr.c \
		  red_map.c \
		  red_rws.c \
		  ft_compare.c \
		  ft_create_ia.c \
		  ft_max_atcell.c \
		  ft_print_map.c \

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c bsq.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f a.out *.txt
	rm -rf testmaps

re: fclean all

.PHONY: all clean fclean re
