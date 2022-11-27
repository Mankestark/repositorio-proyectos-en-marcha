/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papa <papa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:34:50 by papa              #+#    #+#             */
/*   Updated: 2022/11/27 10:30:37 by papa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

static int	check_repetido(Nodo **pila)
{
	Nodo	*temp;
	Nodo	*original;
	int		i;

	temp = *pila;
	while (temp)
	{
		i = 0;
		original = temp;
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

int	check_ok(Nodo **pilaA)
{
	Nodo	*original;

	original = *pilaA;
	while ((*pilaA)->siguiente)
	{
		if ((*pilaA)->numb > (*pilaA)->siguiente->numb
			|| original->numb > (*pilaA)->numb)
			return (0);
		original = (*pilaA)->siguiente;
		*pilaA = (*pilaA)->siguiente;
	}
	return (1);
}
int	check_integer(Nodo **pila)
{
	Nodo	*temp;

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
int	check_digit(void)