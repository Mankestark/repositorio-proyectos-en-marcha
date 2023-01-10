/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestark <mankestark@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:12:27 by mankestarkd       #+#    #+#             */
/*   Updated: 2023/01/10 13:33:04 by mankestark       ###   ########.fr       */
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
