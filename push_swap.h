/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papa <papa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:52:08 by arimar            #+#    #+#             */
/*   Updated: 2022/11/30 06:35:12 by papa             ###   ########.fr       */
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

//	PUSH
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

//SORT
//establece que tipo de ordenacion dependiendo de la cantidad de argumentos
static void push_swap(Nodo **pilaA, Nodo **pilaB, int taman_pila);



#endif
