/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:32:41 by arimar            #+#    #+#             */
/*   Updated: 2022/12/02 23:04:28 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_swap(t_pila **pila_a, int taman_pila)
{
	if (taman_pila == 2 && !check_sorted(*pila_a))
		sa(pila_a);
	else if (taman_pila == 3)
		sort_peque(pila_a);
}

int	main(int argc, char **argv)
{
	t_pila	*pila_a;
	//t_pila	*pila_b;
	int		pila_lenght;

	if (argc < 2)
		return (0);
	if (!check_ok(argv))
	{
		printf("Error\n");
		free(pila_a);
	//	free(pila_b);
	}
	//pila_b = NULL;
	pila_a = pusheo(argc, argv);
	pila_lenght = taman_pila(&pila_a);
	push_swap(&pila_a, pila_lenght);
	return (0);
}
