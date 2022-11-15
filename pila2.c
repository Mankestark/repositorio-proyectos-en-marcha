/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pila2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papa <papa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:22:45 by papa              #+#    #+#             */
/*   Updated: 2022/11/15 00:03:02 by papa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
//declaracion de la pila
struct			nodo
{
	int			dato;
	struct nodo	*siguiente;
};
//creacion de un nuevo elemento
struct nodo	*crearNodo(int dato)
{
	struct nodo	*nuevo;

	nuevo = (struct nodo *)malloc(sizeof(struct nodo));
	nuevo->dato = dato;
	nuevo->siguiente = NULL;
	return (nuevo);
}
//introduccion del elemento en la pila
void	push(int dato, struct nodo **pila)
{
	struct nodo	*nuevo;

	nuevo = crearNodo(dato);
	nuevo->siguiente = *pila;
	*pila = nuevo;
}
//quitar elementos de la pila
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
		printf("%d, ", temp->dato);
		temp = temp->siguiente;
	}
	printf("\n");
}

int	main(void)
{
	struct nodo	*pila;

	pila = crearNodo(15);
	push(2, &pila);
	push(3, &pila);
	imprimirpila(&pila);
	return (0);
}
