/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestark <mankestark@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 00:17:02 by mankestarkd       #+#    #+#             */
/*   Updated: 2023/01/09 00:25:12 by mankestark       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>
# include <stdio.h>
# include "libft/libft.h"
# include <X11/X.h>
# include <X11/keysym.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct s_img
{
	void	*imp_ptr;
	void	*mlx_img;
	char	*addr;
	int		bpp;
	int		line_len;
	int		endian;
}			t_img;
typedef struct s_data
{
	void	*mlx_ptr;
	void	*win_ptr;
	t_img	img;
}			t_data;

typedef struct s_rect
{
	int		x;
	int		y;
	int		width;
	int		height;
	int		color;
}			t_rect;

void		img_pix_put(t_img *img, int x, int y, int color);
int			render_rect(t_img *img, t_rect rect);
int			handle_keypress(int keysym, t_data *data);
int			render(t_data *data);
void		render_background(t_img *img, int color);
int			check_args(int argc, char **argv);
char		*ft_strstr(char *haystack, char *needle);

#endif