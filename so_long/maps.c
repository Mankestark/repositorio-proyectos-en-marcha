/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:12:27 by mankestarkd       #+#    #+#             */
/*   Updated: 2023/01/09 09:46:32 by mankestarkd      ###   ########.fr       */
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
