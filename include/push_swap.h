/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:52:08 by arimar            #+#    #+#             */
/*   Updated: 2022/12/04 00:24:25 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>

//Definicion del t_pila
typedef struct l_pila
{
	int				numb;
	int				index;
	struct l_pila	*siguiente;
}					t_pila;

//	PUSH
//pusheo de los argumentos
t_pila				*pusheo(int argc, char **argv);
//crear pila vacia
t_pila				*pilavacia(void);

//	CHECK

//valida todos los chequeos
int					check_ok(char **argv);

//comprueba que la pila_a esta ordenada
int					check_sorted(t_pila *pila);

//	CHECK_UTILS
//comprobación si es un digito
int					check_digit(char c);
//comprobación signo negativo o positivo
int					check_sign(char c);
//comprueba los argumentos
int					check_arg_comp(const char *c1, const char *c2);

//mide el tamaño de la pila
int					taman_pila(t_pila **pila);

//INIT_SORT
void				sa(t_pila **pila_a);
//intercambia los dos primeros t_pilas de la pila_b
void				sb(t_pila **pila_b);
//intercambia los dos primeros t_pilas de la pila A y B a la vez

//UTILS
//Crear un t_pila y a la ve
t_pila				*creart_pila(int numb);

//Introducir un t_pila
void				push(int numb, t_pila **pila);
//Quitar un t_pila
int					pop(t_pila **pila);
//Ver que t_pila esta en la cima
int					cima(t_pila **pila);
//imprimir pila
void				imprimirpila(t_pila **pila);
//inicia el indice la pila
void				init_index(t_pila *pila_a, int pila_lenght);
//devuelve el ultimo t_pila
t_pila				*ultimo_t_pila(t_pila *pila);
//devuelve el penultimo t_pila
t_pila				*penultimo_t_pila(t_pila *pila);

int					pila_ordenada(t_pila **pila);

//MOVIMIENTOS
//hace intercambio en pila_a
void				sa(t_pila **pila_a);
//hace intercambio en pila_b
void				sb(t_pila **pila_b);
//hace intercambio de las dos
void				ss(t_pila **pila_a, t_pila **pila_b);
//pushea de la pila_a a la pila_b
void				pa(t_pila **pila_a, t_pila **pila_b);
//pushea de la pila_b a la pila_a
void				pb(t_pila **pila_a, t_pila **pila_b);
//hace rotate en la pila_a
void				ra(t_pila **pila_a);
//hace rotate en la pila_b
void				rb(t_pila **pila_b);
//hace rotate en las dos pilas a la vez
void				rr(t_pila **pila_a, t_pila **pila_b);
//hace rev_rotate en pila_a
void				rra(t_pila **pila_a);
//hace rev_rotate en la pila_b
void				rrb(t_pila **pila_b);
//hace rev_rotate en las dos pilas a la vez
void				rrr(t_pila **pila_a, t_pila **pila_b);

//SORT_PEQUE
//hace ordenacion con 3 elementos
void				sort_peque(t_pila **pila);

#endif
