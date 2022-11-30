/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 05:36:22 by papa              #+#    #+#             */
/*   Updated: 2022/11/30 22:59:57 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



static void push_swap(Nodo **pilaA, Nodo **pilaB, int taman_pila)
{
    if (taman_pila == 2 && ! check_sorted(*pilaA))
        sa (pilaA);
    else (taman_pila == 3)
        peque_sort (pilaA);
    else if (taman_pila > 3 && !check_sorted(*pilaA))
        sort(pilaA, pilaB);
}

static void sort(Nodo *pila)
{
    int temp;

    if (pila == NULL || pila->siguiente == NULL)
        return (1);
    temp = pila->numb;
    pila->numb = pila->siguiente->numb;
    pila->siguiente->numb = temp;

}