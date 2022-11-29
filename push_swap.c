/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papa <papa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:32:41 by arimar            #+#    #+#             */
/*   Updated: 2022/11/29 05:42:00 by papa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	Nodo	*pilaA;
	Nodo	*pilaB;
	int pila_lenght;

	if (argc < 2)
		return (0);
	if (!check_ok(argv))
	{
		printf("Error\n");
		free(pilaA);
		free(pilaB);
	}		
	pilaB = NULL;
	pilaA = pusheo(argc, argv);
	//pila_lenght = taman_pila(&pilaA);
	
	
	return (0);
}
