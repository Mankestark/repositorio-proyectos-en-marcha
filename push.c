/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 00:29:50 by mankestarkd       #+#    #+#             */
/*   Updated: 2022/12/07 23:58:52 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_pila	*pusheo(int argc, char **argv)
{
	t_pila	*pila;
	int		i;

	pila = creart_pila(ft_atoi(argv[1]));
	i = 2;
	while (i < argc)
	{
		push(ft_atoi(argv[i]), &pila);
		i++;
	}
	return (pila);
}

void	init_index(t_pila *pila_a, int pila_lenght)
{
	t_pila	*i;
	t_pila	*j;
	int		numb;

	while (--pila_lenght > 0)
	{
		i = pila_a;
		numb = INT_MIN;
		j = NULL;
		while (i)
		{
			if (i->numb == INT_MIN && i->index == 0)
				i->index = 1;
			if (i->numb > numb && i->index == 0)
			{
				numb = i->numb;
				j = i;
				i = pila_a;
			}
			else
				i = i->siguiente;
		}
		if (j != NULL)
			j->index = pila_lenght;
	}
}
