/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:52:08 by arimar            #+#    #+#             */
/*   Updated: 2022/12/02 07:51:19 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

//Definicion del nodo
typedef struct nodo 
{
	int numb;
	int	index;
	struct nodo* siguiente;
}Nodo;

//	PUSH
//pusheo de los argumentos
Nodo* pusheo(int argc, char **argv);
//crear pila vacia
Nodo *pilavacia(void);

//	CHECK
//comprobacion repetido
static int check_repetido(char **argv);
//valida todos los chequeos
int check_ok(char **argv);
//comprueba que el argumento es 0 para evitar duplicado 0000
static int check_zero(char *argv);
//comprueba que el argumento es un numero
static int check_arg_digit(char *argv);
//comprueba que la pilaA esta ordenada
int che_sorted (Nodo *pila);

//	CHECK_UTILS
//comprobación si es un digito
int check_digit(char c);
//comprobación signo negativo o positivo
int check_sign(char c);
//comprueba los argumentos
int check_arg_comp(const char *c1, const char *c2);

//mide el tamaño de la pila
int taman_pila(Nodo **pila);

//INIT_SORT
//establece que tipo de ordenacion dependiendo de la cantidad de argumentos
static void push_swap(Nodo **pilaA, Nodo **pilaB, int taman_pila);
//hace intercambio de nodos
static void swap(Nodo *pila);

void sa(Nodo **pilaA);
//intercambia los dos primeros nodos de la pilaB
void sb(Nodo **pilaB);
//intercambia los dos primeros nodos de la pila A y B a la vez

//UTILS
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
//inicia el indice la pila
void init_index(Nodo *pilaA, int pila_lenght);
//devuelve el ultimo nodo
Nodo ulimo_nodo(Nodo *pila);

#endif
