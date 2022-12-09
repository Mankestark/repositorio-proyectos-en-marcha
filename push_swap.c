/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:32:41 by arimar            #+#    #+#             */
/*   Updated: 2022/12/09 11:40:44 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_sorted(t_pila *pila)
{
	while (pila->siguiente != NULL)
	{
		if (pila->index > pila->siguiente->index)
			return (0);
		pila = pila->siguiente;
	}
	return (1);
}

static void	push_swap(t_pila **pila_a, t_pila **pila_b, int pila_lenght)
{
	if (pila_lenght == 2 && !check_sorted(*pila_a))
		sa(pila_a);
	else if (pila_lenght == 3)
		sort_peque(pila_a);
	else if (pila_lenght > 3 && !check_sorted(*pila_a))
		sort(pila_a, pila_b);
}

int	main(int argc, char **argv)
{
	t_pila	*pila_a;
	int		pila_lenght;
	t_pila	*pila_b;

	if (argc < 2)
		return (0);
	if (!check_ok(argv))
		go_error(NULL, NULL);
	pila_b = NULL;
	pila_a = pusheo(argc, argv);
	pila_lenght = taman_pila(pila_a);
	init_index(pila_a, pila_lenght + 1);
	push_swap(&pila_a, &pila_b, pila_lenght);
	//imprimirpila(&pila_a);
	free_pila(&pila_a);
	free_pila(&pila_b);
	return (0);
}
