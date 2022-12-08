/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_movs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:04:36 by mankestarkd       #+#    #+#             */
/*   Updated: 2022/12/08 21:22:05 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	nb_abs(int nb)
{
	if (nb < 0)
		return (nb * -1);
	return (nb);
}

static void	do_rev_rotate_both(t_pila **pila_a, t_pila **pila_b, int *cost_a,
		int *cost_b)
{
	while (*cost_a < 0 && *cost_b < 0)
	{
		(*cost_a)++;
		(*cost_b)++;
		rrr(pila_a, pila_b);
	}
}

/* do_rotate_both:
*	Rotates both stack A and B until one of them is in position.
*	The given cost is positive since both positions are in the top half
*	of their respective stacks. The cost is decreased as the stacks are
*	rotated, when one reaches 0, the stack has been rotated as far as possible
*	and the top position is correct.
*/
static void	do_rotate_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b)
{
	while (*cost_a > 0 && *cost_b > 0)
	{
		(*cost_a)--;
		(*cost_b)--;
		do_rr(a, b);
	}
} 

static void	do_rotate_a(t_pila **pila_a, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			ra(pila_a);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			rra(pila_a);
			(*cost)++;
		}
	}
}
*	the stack will be reverse rotated, if it is positive, it will be 

static void	do_rotate_b(t_stack **b, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			do_rb(b);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			do_rrb(b);
			(*cost)++;
		}
	}
}

/* do_move:
*	Chooses which move to make to get the B stack element to the correct
*	position in stack A.
*	If the costs of moving stack A and B into position match (i.e. both negative
*	of both positive), both will be	rotated or reverse rotated at the same time.
*	They might also be rotated separately,
		before finally pushing the top B element
*	to the top stack A.
*/
void	do_move(t_stack **a, t_stack **b, int cost_a, int cost_b)
{
	if (cost_a < 0 && cost_b < 0)
		do_rev_rotate_both(a, b, &cost_a, &cost_b);
	else if (cost_a > 0 && cost_b > 0)
		do_rotate_both(a, b, &cost_a, &cost_b);
	do_rotate_a(a, &cost_a);
	do_rotate_b(b, &cost_b);
	do_pa(a, b);
}