CC	= gcc
FLAGS	= -Wall -Wextra -Werror
NAME	= so_long

SRC	= so_long.c
OBJ	= $(SRC:.c=.o)

LIBFT_PATH	=	./libft/

CFLAGS	=	-I$(LIBFT_PATH) $(FLAGS)

LINKS	=	-L $(LIBFT_PATH) -lft

all: libft $(NAME)

$NAME: libft $(OBJ)
	@$(CC) $(FLAGS) -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME) $(OBJ) $(LINKS)


%.o: %.c
	$(CC) -I/usr/include -Imlx_linux -03 -c $< -o $@

libft:	
	@make -C $(LIBFT_PATH)

clean:	
	@rm -f $(FLAGS)
	@make -C $(LIBFT_PATH) clean
fclean:
	@rm -f (NAME) $(LIBFT_PATH) libft.all

re:	fclean all

.PHONY:	all libft clean fclean re
