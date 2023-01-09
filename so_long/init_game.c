/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:50:48 by mankestarkd       #+#    #+#             */
/*   Updated: 2023/01/09 11:09:52 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	get_init_position(t_data *data)
{
	int	row;
	int	col;

	row = 0;
	while (row < data->map.size.y)
	{
		col = 0;
		while (col <= data->map.size.x)
		{
			if (data->map.mtx[row][col] == 'P')
			{
				data->img.pos.x = col;
				data->imp.pos.y = row;
			}
			col++;
		}
		row++;
	}
	return (0);
}

int	count_collec(t_data *data)
{
	int	row;
	int	col;

	row = 0;
	var->game.count_collec = 0;
	while (row < data->map.size.y)
	{
		col = 0;
		while (col < data->map.size.x)
		{
			if (data->map.mtx[row][col] == 'C')
				data->game.count_collec++;
			col++;
		}
		row++;
	}
	return (data->game.count_collec);
}

int	check_collect(t_data *data)
{
	if (count_collec(data) == 0)
	{
		free_exit(data, "e[34m\e[1mCONGRATS\n!!!! You WON !!!!\e[0m\n");
	}
	else
		ft_printf("e[35m\e[1mPlease, collect all diamonds!!!\e[0m\n");
	return (0);
}
