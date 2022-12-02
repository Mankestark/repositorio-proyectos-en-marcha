/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:56:56 by arimar            #+#    #+#             */
/*   Updated: 2022/12/02 20:00:37 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

t_pila	*creart_pila(int numb)
{
	t_pila	*t_pila;

	t_pila = malloc(sizeof(t_pila));
	t_pila->numb = numb;
	t_pila->siguiente = NULL;
	return (t_pila);
}

void	push(int numb, t_pila **pila)
{
	t_pila	*t_pila;

	t_pila = Creart_pila(numb);
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

void	init_index(t_pila *pilaA, int pila_lenght)
{
	t_pila	*i;
	t_pila	*j;
	int		k;

	while (--pila_lenght > 0)
	{
		i = pilaA;
		k = INT_MIN;
		j = NULL;
		while (i)
		{
			if (i->k == INT_MIN && i->index == 0)
				i->index = 1;
			if (i->k > k && i->index == 0)
			{
				k = i->k;
				k = i;
				i = pilaA;
			}
			else
				i = i->siguiente;
		}
		if (k != NULL)
			k->index = pila_lenght;
	}
}
