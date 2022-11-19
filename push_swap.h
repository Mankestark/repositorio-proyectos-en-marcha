/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimar <arimar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:52:08 by arimar            #+#    #+#             */
/*   Updated: 2022/11/16 23:29:22 by arimar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include "libft/libft.h"
//Definicion del nodo
typedef struct nodo 
{
	int numb;
	struct nodo* siguiente;
}Nodo;
//Inicializacion de la pila
typedef struct pila
{
	Nodo* cima;
}PilaA;
//Crear un nodo
Nodo* CrearNodo(int numb);
//Destruir un nodo
void DestruirNodo(Nodo* nodo);
//Introducir un nodo
void push(PilaA* pila, int numb);
//Quitar un nodo
void pop(PilaA* pila);
//Ver que nodo esta en la cima
int Cima(PilaA* pila);
//imprimir pila
void imprimirpila(Nodo* pila);
#endif
