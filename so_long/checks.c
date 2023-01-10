/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestark <mankestark@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 00:16:17 by mankestark        #+#    #+#             */
/*   Updated: 2023/01/10 12:46:09 by mankestark       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	check_walls(t_data data)
{
	int	row;
	int	col;

	row = 0;
	while (row < data.map.size.y)
	{
		col = 0;
		if (row == 0 || row == (data.map.size.y - 1))
		{
			while (data.map.mtx[row][col])
			{
				if (data.map.mtx[row][col] != '1')
					error("Invalid map: top or down wall not configured");
				col++;
			}
		}
		if (data.map.mtx[row][0] != '1' || data.map.mtx[row][data.map.size.x
			- 1] != '1')
			error("Invalid map: lateral wall not configured");
		row++;
	}
	return (0);
}

int	check_sprites(t_data data)
{
	int	has[3];
	int	row;
	int	col;

	row = 0;
	while (row < data.map.size.y)
	{
		col = 0;
		while (row < data.map.size.x)
		{
			if (data.map.mtx[row][col] == 'P')
				has[0] = 1;
			if (data.map.mtx[row][col] == 'E')
				has[1] = 1;
			if (data.map.mtx[row][col] == 'C')
				has[2] = 1;
			col++;
		}
		row++;
	}
	if (has[0] != 1 || has[1] != 1 || has[2] != 1)
		error("Invalid map: missing PEC");
	return (0);
}

int	check_ret(t_data data)
{
	int	row;

	row = 0;
	while (row < data.map.size.y)
	{
		if (data.map.size.x != (int)ft_strlen(data.map.mtx[row]))
			error("Invalid map: not a rectangle");
		row++;
	}
	return (0);
}

int	check_char(t_data data)
{
	int	row;
	int	col;

	row = 0;
	while (row < data.map.size.y)
	{
		col = 0;
		while (data.map.mtx[row][col])
		{
			if (data.map.mtx[row][col] != '0' && data.map.mtx[row][col] != '1'
				&& data.map.mtx[row][col] != 'P'
				&& data.map.mtx[row][col] != 'E'
				&& data.map.mtx[row][col] != 'C')
				error("Invalid map: unknown char");
			col++;
		}
		row++;
	}
	return (0);
}

int	check_map(t_data data)
{
	check_walls(data);
	check_sprites(data);
	check_ret(data);
	check_char(data);
	return (0);
}
