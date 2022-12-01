/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:32:41 by arimar            #+#    #+#             */
/*   Updated: 2022/12/01 10:41:06 by mankestarkd      ###   ########.fr       */
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
	pila_lenght = taman_pila(&pilaA);
	
	push_swap (&pilaA, &pilaB, pila_lenght);
	
	
	return (0);
}
