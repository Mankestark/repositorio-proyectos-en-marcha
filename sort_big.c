/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 22:29:16 by mankestarkd       #+#    #+#             */
/*   Updated: 2022/12/08 01:37:05 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	sort(t_pila **pila_a, t_pila **pila_b, int max, int n)
{
	int	i;
	int	len;
	int	limit;

	if (n > max || check_sorted(*pila_a))
	{
		while (taman_pila(*pila_b))
			push_ab(pila_a, pila_b, 'a');
		return (0);
	}
	i = -1;
	len = taman_pila(*pila_b);
	limit = element_orden(*pila_a, *pila_b, 'a');
	while (++i < len - limit && !check_sorted(*pila_a))
	{
		if (!((*pila_a)->numb >> n & 1))
			push_ab(pila_b, pila_a, 'b');
		else
			rotate_ab(pila_a, 'a');
	}
	i = -1;
	len = taman_pila(*pila_b);
	while (++i < len - element_orden(*pila_a, *pila_b, 'b'))
		push_ab(pila_a, pila_b, 'a');
	return (sort(pila_a, pila_b, max, n + 1));
}
