CC	= gcc
FLAGS = -Wall -Wextra -Werror 
NAME = push_swap

SRC	= push_swap.c check_utils.c check.c mov_swap.c mov_push.c mov_reverse.c mov_rotate.c push.c utils.c sort_peque.c utils_sort.c
OBJ	= $(SRC:.c=.o)

INCS	=	./include/
LIBFT_PATH =	./libft/

CFLAGS =	-I$(LIBFT_PATH)include/ -I$(INCS) $(FLAGS)

LINKS	=	-L $(LIBFT_PATH) -lft

all: libft $(NAME)

$(NAME): libft $(OBJ)
		 @$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LINKS)
		

libft: 
		@make -C $(LIBFT_PATH)

clean: 
		@rm -f $(OBJ)
		@make -C $(LIBFT_PATH) clean

fclean: clean
	    @rm -f $(NAME) $(LIBFT_PATH)libft.a

re:	fclean all

.PHONY:	all libft clean fclean re