/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:56:56 by arimar            #+#    #+#             */
/*   Updated: 2022/12/03 16:54:45 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

t_pila	*creart_pila(int numb)
{
	t_pila	*pila;

	pila = malloc(sizeof(pila));
	pila->numb = numb;
	pila->siguiente = NULL;
	return (pila);
}

void	push(int numb, t_pila **pila)
{
	t_pila	*t_pila;

	t_pila = creart_pila(numb);
	t_pila->siguiente = *pila;
	*pila = t_pila;
}

void	imprimirpila(t_pila **pila)
{
	t_pila	*temp;

	temp = *pila;
	while (temp)
	{
		printf("%d\n", temp->numb);
		temp = temp->siguiente;
	}
}

int	taman_pila(t_pila **pila)
{
	int	i;

	i = 0;
	if (!(*pila))
		return (0);
	while (*pila)
	{
		*pila = (*pila)->siguiente;
		i++;
	}
	return (i);
}
