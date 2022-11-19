/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimar <arimar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:56:56 by arimar            #+#    #+#             */
/*   Updated: 2022/11/16 23:55:59 by arimar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlibl.h>

Nodo* CrearNodo(int numb)
{
	Nodo* nodo = malloc(sizeof(Nodo));
	nodo->numb = numb;
	nodo->siguiente = NULL;
	return nodo;	
}

void DestruirNodo(Nodo* nodo)
{
	nodo->siguiente = NULL;
	free(nodo);
}

void push(PilaA* pila, int numb)
{
	Nodo* nodo = CrearNodo(numb);
	nodo->siguiente = pila->cima;
	pila->cima = nodo;
}
void pop(PilaA* pila)
{
	if (pila->cima == NULL)
		printf("La pila esta vacia\n");
	else 
		Nodo* eliminar = pila->cima;
		pila->cima = pila->cima->siguiente;
		DestruirNodo(eliminar);
}
int Cima(PilaA* pila)
{
	if (pila->cima == NULL)
		return NULL;
	else
		return pila->cima->numb;
}
void imprimirpila(Nodo **pila)
{
	Nodo* temp;
	
	temp = *pila;
	while (temp)
	{
		printf("%d\n", temp->numb);
		temp = temp->siguiente;
	}
}
