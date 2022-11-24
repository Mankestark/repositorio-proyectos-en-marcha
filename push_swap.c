/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papa <papa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:32:41 by arimar            #+#    #+#             */
/*   Updated: 2022/11/24 23:33:40 by papa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	Nodo	*pilaA;
	//Nodo	*pilaB;

	//pilaB = NULL;
	if (argc == 1)
		return (0);
	pilaA = pusheo(argc, argv);
	if (check_ordenado(&pilaA))
		printf("la pila esta ordenada\n");
	if (check_repetido(&pilaA))
		printf("Hay digitos repetidos\n");
	if (check_integer(&pilaA))
		printf("Obligatorio un entero\n");
	return (0);
}
