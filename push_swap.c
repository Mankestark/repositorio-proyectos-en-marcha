/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papa <papa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:32:41 by arimar            #+#    #+#             */
/*   Updated: 2022/11/27 10:31:01 by papa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	main(int argc, char **argv)
{
	Nodo	*pilaA;
	Nodo	*pilaB;

	if (argc < 2)
		return (0);
	if (!check_ok(argv))
		ft_printf("Error\n");
	pilaB = NULL;
	pilaA = pusheo(argc, argv);
	return (0);
}
