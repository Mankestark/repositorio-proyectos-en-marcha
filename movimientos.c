/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movimientos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 06:09:54 by mankestarkd       #+#    #+#             */
/*   Updated: 2022/12/02 07:56:34 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void swap(Nodo *pila)
{
    int temp;

    if (pila == NULL || pila->siguiente == NULL)
        return (1);
    temp = pila->numb;
    pila->numb = pila->siguiente->numb;
    pila->siguiente->numb = temp;
    temp = pila->index;
    pila-> index = pila->siguiente->index;
    pila->siguiente->index = temp;

}

void sa(Nodo **pilaA)
{
    swap(*pilaA);
    ft_printf("sa\n");
}

void sb(Nodo **pilaB)
{
    swap(*pilaB);
    ft_printf("sb\n");
}

void ss(Nodo **pilaA, Nodo **pilaB)
{
    swap(*pilaA);
    swap(*pilaB);
    ft_printf("ss\n");
}

static void  push_pila(Nodo **init, Nodo **dest)
{
    Nodo *temp;

    if (*init == NULL)
        return (1);
    temp = (*init)->siguiente;
    (*init)->siguiente = *dest;
    *dest = *init;
    *init = tmp;
}

void pa(Nodo **pilaA, Nodo **pilaB)
{
    push_pila(pilaB, pilaA);
    ft_printf("pa\n");
}

void pb(Nodo **pilaA, Nodo **pilaB)
{
    push_pila(pilaA, pilaB);
    ft_printf("pb\n");
}

static void rotate_pila(Nodo **pila)
{
    Nodo *temp;
    Nodo *temp2;

    temp = *pilaA;
    *pilaA = (*pilaa)->siguiente;
    temp1 = ultimo_nodo(*pila);
    temp -> siguiente = NULL;
    temp2 -> siguiente = temp;
}

void ra(Nodo **pilaA)
{
    rotate_pila(pilaA);
    ft_printf("ra\n");
}

void rb(Nodo **pilaB)
{
    rotate_pila(pilaB);
    ft_printf("rb\n");
}

void rr(Nodo **pilaA, Nodo **pilaB)
{
    rotate_pila(pilaA);
    rotate_pila(pilaB);
    ft_printf("rr\n");
}