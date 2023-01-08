/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestark <mankestark@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 00:16:17 by mankestark        #+#    #+#             */
/*   Updated: 2023/01/09 00:19:04 by mankestark       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	check_args(int argc, char **argv)
{
	if (argc < 2)
	{
		perror("Introduce el nombre del mapa como argumento\n\
 ./so_long map/map.ber");
		exit(EXIT_FAILURE);
	}
	if (argc > 2)
	{
		perror("Demasiados argumentos\n");
		exit(EXIT_FAILURE);
	}
	if (ft_strstr(argv[1], ".ber") == NULL)
	{
		perror("Mapa invalido\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}
