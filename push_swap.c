/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papa <papa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:32:41 by arimar            #+#    #+#             */
/*   Updated: 2022/11/21 06:19:22 by papa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	Nodo* pilaA;
	//Nodo* pilaB;
	int i;
	
	pilaA = CrearNodo(atoi(argv[1]));
	i = 1;
	if (argc != 2)
		while (argv != NULL)
		{
			push(atoi(argv[i]), &pilaA);
			i++;
		}	
	imprimirpila(&pilaA);
	return (0);
}
