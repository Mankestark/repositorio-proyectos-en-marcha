/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 00:17:02 by mankestarkd       #+#    #+#             */
/*   Updated: 2023/01/09 09:33:03 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/libft.h"
# include <X11/X.h>
# include <X11/keysym.h>
# include <fcntl.h>
# include <mlx.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/stat.h>

typedef struct s_pos
{
	int		x;
	int		y;
}			t_pos;

typedef struct s_img
{
	void	*imp_ptr;
	t_pos	size;
	t_pos	pos;
	int		*addr;
	int		bpp;
	int		line_len;
	int		endian;
}			t_img;

typedef struct s_map
{
	char	**mtx;
	t_pos	size;
}			t_map;

typedef struct s_game
{
	int		count_collec;
	int		count_steps;
}			t_game;

typedef struct s_data
{
	void	*mlx_ptr;
	void	*win_ptr;
	t_img	img;
	t_game	game;
	t_map	map;
}			t_data;

int			init(t_data *data);
void		img_pix_put(t_img *img, int x, int y, int color);
int			render_rect(t_img *img, t_rect rect);
int			handle_keypress(int keysym, t_data *data);
int			render(t_data *data);
void		render_background(t_img *img, int color);
int			check_args(int argc, char **argv);
char		*ft_strstr(char *haystack, char *needle);

#endif