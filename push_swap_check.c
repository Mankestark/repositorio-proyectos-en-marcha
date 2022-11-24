/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimar <arimar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:34:50 by papa              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/11/24 05:49:21 by papa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_repetido(Nodo** pila)
=======
/*   Updated: 2022/11/22 23:30:01 by arimar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int check_repetido(Nodo *pila)
>>>>>>> ec0356b8b57ac7b7b3bf986cdca997489c6068ed
{
    Nodo *temp;
    Nodo *original;

<<<<<<< HEAD
    temp = *pila;
    while (temp->numb)
=======
    temp = pila->numb;
    while (temp)
>>>>>>> ec0356b8b57ac7b7b3bf986cdca997489c6068ed
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

<<<<<<< HEAD
int check_ordenado(Nodo** pilaA, Nodo** pilaB)
{
    Nodo *original;
    
    if (!(*pilaA)->numb)
        return (0);
    original = *pilaA;
    while (original->siguiente)
=======
int check_sorted(Nodo *pilaA, Nodo *pilaB)
{
    Nodo *original;
    
    if (!pilaA->numb)
        return (0);
    original = pilaA->numb;
    whila (original->siguiente)
>>>>>>> ec0356b8b57ac7b7b3bf986cdca997489c6068ed
    {
        if (original->numb > original->siguiente->numb)
            return (0);
        original = original->siguiente;
    }
<<<<<<< HEAD
    if (!(*pilaB)->numb)
=======
    if (pilaB->numb != NULL)
>>>>>>> ec0356b8b57ac7b7b3bf986cdca997489c6068ed
        return (0);
    return (1);
}
