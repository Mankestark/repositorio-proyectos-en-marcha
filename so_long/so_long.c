/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 02:48:58 by mankestarkd       #+#    #+#             */
/*   Updated: 2023/01/09 09:10:06 by mankestarkd      ###   ########.fr       */
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
	init(&data);
	data.mlx_ptr = mlx_init();
	if (data.mlx_ptr == NULL)
		return (1);
	data.win_ptr = mlx_new_window(data.mlx_ptr, 800, 600, "primera");
	if (data.win_ptr == NULL)
	{
		free(data.win_ptr);
		return (1);
	}
	data.img.mlx_img = mlx_new_image(data.mlx_ptr, 800, 600);
	data.img.addr = mlx_get_data_addr(data.img.mlx_img, &data.img.bpp,
			&data.img.line_len, &data.img.endian);
	mlx_loop_hook(data.mlx_ptr, &render, &data);
	mlx_hook(data.win_ptr, KeyPress, KeyPressMask, &handle_keypress, &data);
	mlx_loop(data.mlx_ptr);
	mlx_destroy_display(data.mlx_ptr);
	free(data.mlx_ptr);
}
