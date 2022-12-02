/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_peque.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:21:34 by mankestarkd       #+#    #+#             */
/*   Updated: 2022/12/02 19:46:25 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	index_high(t_pila *pila)
{
	int	index;

	index = pila->index;
	while (pila)
	{
		if (pila->index > index)
			index = pila->index;
		pila = pila->siguiente;
	}
	return (index);
}

void	sort_peque(t_pila **pila)
{
	int	mayor;

	if (pila_ordenada(*pila))
		return ;
	mayor = index_high(*pila);
	if ((*pila)->index == mayor)
		ra(pila);
	else if ((*pila)->siguiente->index == mayor)
		rra(pila);
	if ((*pila)->index > (*pila)->siguiente->index)
		sa(pila);
}
