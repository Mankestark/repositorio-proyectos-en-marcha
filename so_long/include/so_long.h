/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 00:17:02 by mankestarkd       #+#    #+#             */
/*   Updated: 2023/01/04 01:52:12 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>
# include <stdio.h>
# include "./libft.h"
# include <X11/X.h>
# include <X11/keysym.h>

typedef struct s_img
{
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