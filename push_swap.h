/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimar <arimar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:52:08 by arimar            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/11/24 05:37:54 by papa             ###   ########.fr       */
=======
/*   Updated: 2022/11/22 22:52:57 by arimar           ###   ########.fr       */
>>>>>>> ec0356b8b57ac7b7b3bf986cdca997489c6068ed
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>

//Definicion del nodo
typedef struct nodo 
{
	int numb;
	struct nodo* siguiente;
}Nodo;

//Crear un nodo y a la ve
Nodo* CrearNodo(int numb);

//Introducir un nodo
void push(int numb,Nodo** pila);
//Quitar un nodo
int pop(Nodo** pila);
//Ver que nodo esta en la cima
int Cima(Nodo** pila);
//imprimir pila
void imprimirpila(Nodo** pila);
//pusheo de los argumentos
Nodo* pusheo(int argc, char **argv);
//crear pila vacia
Nodo *pilavacia(void);
<<<<<<< HEAD
//comprobacion repetido
int check_repetido(Nodo** pila);
//comprobacion ordenado
int check_ordenado(Nodo** pilaA, Nodo** pilaB);
=======
>>>>>>> ec0356b8b57ac7b7b3bf986cdca997489c6068ed

#endif
