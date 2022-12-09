/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariza <mariza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:04:30 by mankestarkd       #+#    #+#             */
/*   Updated: 2022/12/09 18:08:20 by mariza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	push_pila(t_pila **init, t_pila **dest)
{
	t_pila	*temp;

	if (*init == NULL)
		return ;
	temp = (*init)->siguiente;
	(*init)->siguiente = *dest;
	*dest = *init;
	*init = temp;
}

void	pa(t_pila **pila_a, t_pila **pila_b)
{
	push_pila(pila_b, pila_a);
	ft_printf("pa\n");
}

void	pb(t_pila **pila_a, t_pila **pila_b)
{
	push_pila(pila_a, pila_b);
	ft_printf("pb\n");
}
