/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papa <papa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:34:50 by papa              #+#    #+#             */
/*   Updated: 2022/11/24 05:49:21 by papa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_repetido(Nodo** pila)
{
    Nodo *temp;
    Nodo *original;

    temp = *pila;
    while (temp->numb)
    {
        original = temp->siguiente;
        while (original)
        {
            if (original->numb == temp->numb)
                return (0);
            original = original->siguiente;
        }
        temp = temp->siguiente;
    }
    return (1);
}

int check_ordenado(Nodo** pilaA, Nodo** pilaB)
{
    Nodo *original;
    
    if (!(*pilaA)->numb)
        return (0);
    original = *pilaA;
    while (original->siguiente)
    {
        if (original->numb > original->siguiente->numb)
            return (0);
        original = original->siguiente;
    }
    if (!(*pilaB)->numb)
        return (0);
    return (1);
}
