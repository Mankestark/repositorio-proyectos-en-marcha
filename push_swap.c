/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimar <arimar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:22:45 by papa              #+#    #+#             */
/*   Updated: 2022/11/15 23:21:11 by arimar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{
	struct nodo	*pila;

	pila = crearNodo(15);
	push(2, &pila);
	push(3, &pila);
	imprimirpila(&pila);
	return (0);
}
