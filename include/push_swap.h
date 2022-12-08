/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:52:08 by arimar            #+#    #+#             */
/*   Updated: 2022/12/08 01:05:09 by mankestarkd      ###   ########.fr       */
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

//	CHECK_UTILS
//comprobación si es un digito
int					check_digit(char c);
//comprobación signo negativo o positivo
int					check_sign(char c);
//comprueba los argumentos
int					check_arg_comp(const char *c1, const char *c2);

//	CHECK
//valida todos los chequeos
int					check_ok(char **argv);

//MOV_PUSH
//pushea de la pila_a a la pila_b
void				pa(t_pila **pila_a, t_pila **pila_b);
//pushea de la pila_b a la pila_a
void				pb(t_pila **pila_a, t_pila **pila_b);

//MOV_REVERSE
//hace rev_rotate en pila_a
void				rra(t_pila **pila_a);
//hace rev_rotate en la pila_b
void				rrb(t_pila **pila_b);
//hace rev_rotate en las dos pilas a la vez
void				rrr(t_pila **pila_a, t_pila **pila_b);

//MOV_ROTATE
//hace rotate en la pila_a
void				ra(t_pila **pila_a);
//hace rotate en la pila_b
void				rb(t_pila **pila_b);
//hace rotate en las dos pilas a la vez
void				rr(t_pila **pila_a, t_pila **pila_b);

//MOV_SWAP
//hace intercambio en pila_a
void				sa(t_pila **pila_a);
//hace intercambio en pila_b
void				sb(t_pila **pila_b);
//hace intercambio de las dos
void				ss(t_pila **pila_a, t_pila **pila_b);

//PUSH
//pushea los argumentos
t_pila				*pusheo(int argc, char **argv);
//inicia el indice de la pila
void				init_index(t_pila *pila_a, int pila_lenght);

//SORT_BIG
//ordena mas de 3 argumentos
int					sort(t_pila **pila_a, t_pila **pila_b, int max, int n);

//SORT_PEQUE
//ordena 3 o menos argumentos
void				sort_peque(t_pila **pila);

//UTILS_SORT_BIG
//extrae el primer argumento de la pila
void				*pop(t_pila **pila);
//pushea el primer argumento de una pila a otra
int					push_ab(t_pila **pila_a, t_pila **pila_b, char c);
//comprueba elementos ordenados
int					element_orden(t_pila *pila_a, t_pila *pila_b, char c);
//mueve cada elemento una posicion hacia arriba
int					rotate_ab(t_pila **pila, char c);

//mide el tamaño de la pila
int					taman_pila(t_pila *pila);

//UTILS_SORT
//ultimo elemento de la pila
t_pila				*ultimo_t_pila(t_pila *pila);
//penultimo elemento de la pila
t_pila				*penultimo_t_pila(t_pila *pila);

//añade un elemento al final de la pila
void				ft_lstadd_back(t_pila **alst, t_pila *new);
//devuelve el tamaño del int en base x
int					ft_nbrlen_base(int n, unsigned int base);
//devuelve el valor absoluto
unsigned int		ft_abs(int n);

//UTILS
//Crear un t_pila y a la ve
t_pila				*creart_pila(int numb);
//Introducir un t_pila
void				push(int numb, t_pila **pila);
//imprimir pila
void				imprimirpila(t_pila **pila);
//devuelver el tamaño de la pila
int					taman_pila(t_pila *pila);

//PUSH_SWAP
//comprueba que la pila_a esta ordenada
int					check_sorted(t_pila *pila);

#endif
