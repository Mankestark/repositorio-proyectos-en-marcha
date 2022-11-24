/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papa <papa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:34:50 by papa              #+#    #+#             */
/*   Updated: 2022/11/24 23:37:47 by papa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_repetido(Nodo **pila)
{
	Nodo	*temp;
	Nodo	*original;
    int i;

	temp = *pila;
	while (temp)
	{
		original = temp;
        i = 0;
		while (original)
		{
			if (original->numb == temp->numb)
				i++;
			    if (i >= 2)
                    return (1);
		    original = original->siguiente;
		}
        temp = temp->siguiente;
	}
	return (0);
}

int	check_ordenado(Nodo **pilaA)
{
	Nodo	*original;

	original = *pilaA;
	while ((*pilaA)->siguiente)
	{
		if ((*pilaA)->numb > (*pilaA)->siguiente->numb || original->numb > (*pilaA)->numb)
			return (0);
		original = (*pilaA)->siguiente;
        *pilaA = (*pilaA)->siguiente;
	}
	return (1);
}
int check_integer(Nodo **pila)
{
    Nodo *temp;
    
    temp = *pila;
    while (temp->siguiente)
    {
        if (temp->numb >= 48 && temp->numb <= 57)
            return (1);
        temp = (*pila)->siguiente;
        *pila = (*pila)->siguiente;        
    }
    return (0);
}
