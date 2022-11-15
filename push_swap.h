/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimar <arimar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:52:08 by arimar            #+#    #+#             */
/*   Updated: 2022/11/15 23:20:43 by arimar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

//declaracion de la pila
struct			nodo
{
	int			dato;
	struct nodo	*siguiente;
};
//creacion de un nuevo nodo que a su vez crea la pila(primer nodo)
struct nodo	*crearNodo(int dato)
{
	struct nodo	*nuevo;

	nuevo = malloc(sizeof(struct nodo));
	nuevo->dato = dato;
	nuevo->siguiente = NULL;
	return (nuevo);
}
int	pop(struct nodo **pila);
void	imprimirpila(struct nodo **pila);
void	push(int dato, struct nodo **pila);


#endif
