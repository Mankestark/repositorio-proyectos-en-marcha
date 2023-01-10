/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 00:16:17 by mankestark        #+#    #+#             */
/*   Updated: 2023/01/10 11:55:29 by mankestarkd      ###   ########.fr       */
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

int check_sprites(t_data data)
{
	int	has[3];
	int	row;
	int	col;
	
	row = 0;
	while (row < data.map.size.x)
	{
		if (data.map.mtx[row][col] == 'P')
			has[0] = 1;
		if (data.map.mtx[row][col] == 'E')
			has[1] = 1;
		if (data.map.mtx[row][col] == 'C')
			has[2] = 1;
		col++
}