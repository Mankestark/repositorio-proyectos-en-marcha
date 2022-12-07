/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 22:29:16 by mankestarkd       #+#    #+#             */
/*   Updated: 2022/12/07 06:28:50 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	pushea_menos_tres(t_pila **pila_a, t_pila **pila_b)
{
	int	x;
	int	j;
	int	i;

	x = pila_lenght(*pila_a);
	j = 0;
	i = 0;
	while (x > 6 && i < x && i < j / 2)
	{
		if ((*pila_a)->index <= j / 2)
		{
			pb(pila_a, pila_b);
			j++;
		}
		else
			ra(pila_a);
		i++;
	}
	while (x - j > 3)
	{
		pb(pila_a, pila_b);
		j++;
	}
}

void	sort_big(t_pila **pila_a, t_pila **pila_b)
{
	pushea_menos_tres(pila_a, pila_b);
	sort_peque(pila_a);
	while (*pila_b)
	{
		
	}
}
