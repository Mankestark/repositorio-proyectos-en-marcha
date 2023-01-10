/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 00:30:36 by mankestarkd       #+#    #+#             */
/*   Updated: 2023/01/10 11:30:40 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	*ft_strcpy_gnl(char *dst, char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		(dst)[i] = (src)[i];
		i++;
	}
	(dst)[i] = '\0';
	return (dst);
}

int	check_args(int argc, char **argv)
{
	if (argc < 2)
	{
		error("Introduce el nombre del mapa como argumento\n\
 ./so_long map/map.ber\n");
		exit(EXIT_FAILURE);
	}
	if (argc > 2)
	{
		error("Demasiados argumentos\n");
		exit(EXIT_FAILURE);
	}
	if (ft_strstr(argv[1], ".ber") == NULL)
	{
		error("Mapa invalido\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}
