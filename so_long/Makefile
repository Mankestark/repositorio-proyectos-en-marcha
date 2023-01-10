CC	= gcc

CFLAGS	= -I $(MLX_DIR) -I $(LIBFT_PATH) -I $(SO_LONG_H)

NAME	= so_long

SRC	= so_long.c so_long_utils.c checks.c errors.c free.c ft_gnl.c init_game.c keys.c maps.c movs.c

OBJ	= $(SRC:.c=.o)

LIBFT_PATH =	./libft/

MLX_DIR = ./minilibx-linux

SO_LONG_H = ./include

all: $(NAME)

$(NAME): $(MLX_DIR) $(OBJ) $(SO_LONG_H) $(LIBFT_PATH)   
	@$(MAKE) -C $(MLX_DIR)
	@$(MAKE) -C $(LIBFT_PATH)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)  -L $(MLX_DIR) -lmlx -lXext -lX11 -L $(LIBFT_PATH) -lft
	
$(MLX_DIR):
	git clone https://github.com/42Paris/minilibx-linux.git $(MLX_DIR)


clean:
	@$(MAKE) -C $(LIBFT_PATH) clean
	@rm -f $(OBJ)

fclean: clean	
	@$(MAKE) -C $(LIBFT_PATH) fclean
	@rm -rf $(NAME) $(MLX_DIR)

re:	fclean all

.PHONY: all libft clean fclean re