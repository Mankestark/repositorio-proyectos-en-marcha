/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimar <arimar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:32:41 by arimar            #+#    #+#             */
/*   Updated: 2022/11/16 23:56:23 by arimar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{
	Nodo* pila;

	pila = CrearNodo(15);
	push(2, &pila);
	push(3, &pila);
	imprimirpila(&pila);
	return (0);
}
