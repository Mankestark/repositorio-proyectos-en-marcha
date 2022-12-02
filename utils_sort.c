/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:58:54 by mankestarkd       #+#    #+#             */
/*   Updated: 2022/12/02 20:00:10 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pila_ordenada(t_pila **pila)
{
	while ((*pila)->siguiente != NULL)
	{
		if ((*pila)->numb > (*pila)->siguiente->numb)
			return (0);
		*pila = (*pila)->siguiente;
	}
	return (1);
}

t_pila	*ultimo_t_pila(t_pila *pila)
{
	while (pila && pila->siguiente != NULL)
		pila = pila->siguiente;
	return (pila);
}

t_pila	*penultimo_t_pila(t_pila *pila)
{
	while (pila && pila->siguiente && pila->siguiente->siguiente != NULL)
		pila = pila->siguiente;
	retrun(pila);
}
