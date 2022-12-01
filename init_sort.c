/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 05:36:22 by papa              #+#    #+#             */
/*   Updated: 2022/12/01 10:40:07 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



static void push_swap(Nodo **pilaA, Nodo **pilaB, int taman_pila)
{
    if (taman_pila == 2 && ! check_sorted(*pilaA))
        sa (pilaA);
    else if(taman_pila == 3)
        peque_sort (pilaA);
    else if (taman_pila > 3 && !check_sorted(*pilaA))
        sort(pilaA, pilaB);
}

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