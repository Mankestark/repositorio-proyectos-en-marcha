/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimar <arimar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:32:41 by arimar            #+#    #+#             */
/*   Updated: 2022/11/22 22:58:34 by arimar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	Nodo* pilaA;
	Nodo* pilaB;
	
	if (argc < 2)
		printf("Numero de argumentos incorrectos\n");
	else	
		pilaA = pusheo(argc, argv);

	imprimirpila(&pilaA);
	pilaB = pilavacia();
	push(pop(&pilaA), &pilaB);
	printf("\n");
	imprimirpila(&pilaB);
	
	return (0);
}
