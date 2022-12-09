/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_reverse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:02:29 by mankestarkd       #+#    #+#             */
/*   Updated: 2022/12/09 18:08:25 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	rev_rotate(t_pila **pila)
{
	t_pila	*temp;
	t_pila	*ultimo;
	t_pila	*penultimo;

	ultimo = ultimo_t_pila(*pila);
	penultimo = penultimo_t_pila(*pila);
	temp = *pila;
	*pila = ultimo;
	(*pila)->siguiente = temp;
	penultimo->siguiente = NULL;
}

void	rra(t_pila **pila_a)
{
	rev_rotate(pila_a);
	ft_printf("rra\n");
}

void	rrb(t_pila **pila_b)
{
	rev_rotate(pila_b);
	ft_printf("rrb\n");
}

void	rrr(t_pila **pila_a, t_pila **pila_b)
{
	rev_rotate(pila_a);
	rev_rotate(pila_b);
	ft_printf("rrr\n");
}
