/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papa <papa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:56:56 by arimar            #+#    #+#             */
/*   Updated: 2022/11/21 05:56:41 by papa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

Nodo	*CrearNodo(int numb)
{
	Nodo	*nodo;

	nodo = malloc(sizeof(Nodo));
	nodo->numb = numb;
	nodo->siguiente = NULL;
	return (nodo);
}

void	push(int numb, Nodo **pila)
{
	Nodo	*nodo;

	nodo = CrearNodo(numb);
	nodo->siguiente = *pila;
	*pila = nodo;
}
int	pop(Nodo **pila)
{
		Nodo* eliminar;
		int data;

	if (*pila == NULL)
		printf("La pila esta vacia\n");
	else
	{
		eliminar = *pila;
		data = eliminar->numb;
		*pila = (*pila)->siguiente;
		free(eliminar);
	}
	return (data);
}

int	Cima(Nodo **pila)
{
	if (*pila == NULL)
		return (0);
	else
		return ((*pila)->numb);
}
void	imprimirpila(Nodo **pila)
{
	Nodo	*temp;

	temp = *pila;
	while (temp)
	{
		printf("%d\n", temp->numb);
		temp = temp->siguiente;
	}
}
