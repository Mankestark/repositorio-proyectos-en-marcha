/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestark <mankestark@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 07:34:47 by mankestarkd       #+#    #+#             */
/*   Updated: 2023/01/10 13:32:06 by mankestark       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	mlx_close(t_data *data)
{
	free_exit(data, "Game closed\n");
	return (0);
}

int	key_press(int key, t_data *data)
{
	int	init_steps;

	init_steps = data->game.count_steps;
	if (key == ESC)
		free_exit(data, "Game closed\n");
	else
		movements(key, data);
	if (init_steps != data->game.count_steps)
		ft_printf("Steps: %d\n", data->game.count_steps);
	print_map(*data);
	return (0);
}
