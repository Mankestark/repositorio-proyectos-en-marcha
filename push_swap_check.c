/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimar <arimar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:34:50 by papa              #+#    #+#             */
/*   Updated: 2022/11/22 23:30:01 by arimar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int check_repetido(Nodo *pila)
{
    Nodo *temp;
    Nodo *original;

    temp = pila->numb;
    while (temp)
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

int check_sorted(Nodo *pilaA, Nodo *pilaB)
{
    Nodo *original;
    
    if (!pilaA->numb)
        return (0);
    original = pilaA->numb;
    whila (original->siguiente)
    {
        if (original->numb > original->siguiente->numb)
            return (0);
        original = original->siguiente;
    }
    if (pilaB->numb != NULL)
        return (0);
    return (1);
}
