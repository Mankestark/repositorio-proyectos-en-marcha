/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papa <papa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 05:36:22 by papa              #+#    #+#             */
/*   Updated: 2022/11/30 06:35:01 by papa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



static void push_swap (Nodo **pilaA, Nodo **pilaB, int taman_pila)
{
    if (taman_pila == 2 && ! check_sorted(*pilaA))
        sa (pilaA);
    else (taman_pila == 3)
        peque_sort (pilaA);
    else if (taman_pila > 3 && !check_sorted(*pilaA))
        sort(pilaA, pilaB);
}
