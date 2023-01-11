/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:12:27 by mankestarkd       #+#    #+#             */
/*   Updated: 2023/01/11 11:11:11 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	get_x_y(t_data *data, char **argv)
{
	int		fd;
	char	*line;

	data->map.size.x = 0;
	data->map.size.y = 0;
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		error("Map not found");
	while (ft_gnl(fd, &line))
	{
		data->map.size.x = ft_strlen(line);
		data->map.size.y++;
		free(line);
	}
	data->map.size.y++;
	free(line);
	close(fd);
	return (0);
}

int	get_map(t_data *data, char **argv)
{
	int	row;
	int	fd;

	row = 0;
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		error("Map not found");
	while (ft_gnl(fd, &data->map.mtx[row]))
		row++;
	close(fd);
	check_map(*data);
	return (0);
}

int	load_map(t_data data, int row, int col)
{
	if (data.map.mtx[row][col] == '1')
		data.img.img_ptr = mlx_xpm_file_to_image(data.mlx, "./images/arbol.xpm",
				&data.img.size.x, &data.img.size.y);
	else if (data.map.mtx[row][col] == '0')
		data.img.img_ptr = mlx_xpm_file_to_image(data.mlx, "./images/suelo.xpm",
				&data.img.size.x, &data.img.size.y);
	else if (data.map.mtx[row][col] == 'E')
		data.img.img_ptr = mlx_xpm_file_to_image(data.mlx,
				"./images/1.xpm", &data.img.size.x, &data.img.size.y);
	else if (data.map.mtx[row][col] == 'C')
		data.img.img_ptr = mlx_xpm_file_to_image(data.mlx,
				"./images/ball.xpm", &data.img.size.x, &data.img.size.y);
	else if (data.map.mtx[row][col] == 'P')
		data.img.img_ptr = mlx_xpm_file_to_image(data.mlx,
				"./images/pikachu.xmp",
				&data.img.size.x, &data.img.size.y);
	mlx_put_image_to_window(data.mlx, data.win, data.img.img_ptr, SPRITE_W
		* col, SPRITE_H * row);
	mlx_destroy_image(data.mlx, data.img.img_ptr);
	return (0);
}

int	print_map(t_data data)
{
	int	row;
	int	col;

	row = 0;
	while (row < data.map.size.y)
	{
		col = 0;
		while (col < data.map.size.x)
		{
			load_map(data, row, col);
			col++;
		}
	}
	return (0);
}
