/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestark <mankestark@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:10:52 by mankestarkd       #+#    #+#             */
/*   Updated: 2023/01/10 13:21:44 by mankestark       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	free_map(t_data *data)
{
	int	row;

	row = 0;
	mlx_destroy_window(data->mlx, data->win);
	mlx_destroy_display(data->mlx);
	free(data->mlx);
	while (row < data->map.size.y)
	{
		free(data->map.mtx[row]);
		row++;
	}
	free(data->map.mtx);
	return (0);
}

int	free_exit(t_data *data, char *msg)
{
	ft_printf("%s", msg);
	free_map(data);
	exit(0);
}
