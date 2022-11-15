/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimar <arimar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:56:56 by arimar            #+#    #+#             */
/*   Updated: 2022/11/15 23:19:43 by arimar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//quitar nodo de la pila
int	pop(struct nodo **pila)
{
	struct nodo	*primero;
	int			data;

	if (!(*pila))
		return (0);
	primero = *pila;
	data = primero->dato;
	*pila = (*pila)->siguiente;
	free(primero);
	return (data);
}
//imprimir la pila
void	imprimirpila(struct nodo **pila)
{
	struct nodo	*temp;

	temp = *pila;
	while (temp)
	{
		printf("%d\n", temp->dato);
		temp = temp->siguiente;
	}
}

//introducir nodo en la pila
void	push(int dato, struct nodo **pila)
{
	struct nodo	*nuevo;

	nuevo = crearNodo(dato);
	nuevo->siguiente = *pila;
	*pila = nuevo;
}
