CC	= gcc

FLAGS	= -Wall -Wextra -Werror

NAME	= so_long

SRC	= so_long.c

OBJ	= $(SRC: .c=.o)

INCS =	./include/

LIBFT_PATH =	./libft/

CFLAGS =	-I$(LIBFT_PATH)include/ -I$(INCS) $(FLAGS) -I/usr/include -Imlx_linux

LINKS =	-L $(LIBFT_PATH) -lft

all:	libft $(NAME)

$(NAME): libft $(OBJ)
	@$(CC) -o $(NAME) $(OBJ) -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz $(CFLAGS) $(LINKS)

libft:
	@make -C $(LIBFT_PATH)

clean:
	@rm -f $(OBJ)
	@make -C $(LIBFT_PATH) clean

fclean: clean	
	@rm -f $(NAME) $(LIBFT_PATH)libft.a

re:	fclean all

.PHONY: all libft clean fclean re