CC	= gcc
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap

SRC	=	push_swap.c check_utils.c check.c mov_swap.c mov_push.c mov_reverse.c mov_rotate.c push.c utils.c sort_peque.c utils_sort.c
OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ) libft
			$(cc) $(CFLAGS) -o $@ $< -L libft -lft

%.o: %.c	$(CC) $(CFLAGS) $?

libft:	cd libft && make

clean:	rm -f $(OBJ)
		make -C libft clean

fclean:	clean
		rm -f $(NAME) libft/libft.a

re:	fclean all

.PHONY:	all libft clean fclean re