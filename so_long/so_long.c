/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 02:48:58 by mankestarkd       #+#    #+#             */
/*   Updated: 2023/01/10 07:31:31 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	init(t_data *data)
{
	data->map.mtx = malloc((data->map.size.y + 1) * sizeof(char *));
	data->map.mtx[data->map.size.y] = NULL;
	data->game.count_steps = 0;
	return (0);
}

int	main(int argc, char **argv)
{
	t_data	data;

	check_args(argc, argv);
	get_x_y(&data, argv);
	init(&data);
	get_map(&data, argv);
	data.mlx = mlx_init();
	if (data.mlx == NULL)
		return (1);
	data.mlx = mlx_new_window(data.mlx, data.map.size.x * SPRITE_W,
			data.map.size.y * SPRITE_H, "S_long");
	if (data.win == NULL)
		return (1);
	get_init_position(&data);
	count_collec(&data);
	print_map(&var);
	mlx_loop_hook(data.mlx_ptr, &render, &data);
	mlx_hook(data.win_ptr, KeyPress, KeyPressMask, &handle_keypress, &data);
	mlx_loop(data.mlx_ptr);
	mlx_destroy_display(data.mlx_ptr);
	free(data.mlx_ptr);
}
