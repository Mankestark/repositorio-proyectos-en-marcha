/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:58:54 by mankestarkd       #+#    #+#             */
/*   Updated: 2022/12/08 01:12:52 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_pila	*ultimo_t_pila(t_pila *pila)
{
	while (pila && pila->siguiente != NULL)
		pila = pila->siguiente;
	return (pila);
}

t_pila	*penultimo_t_pila(t_pila *pila)
{
	while (pila && pila->siguiente && pila->siguiente->siguiente != NULL)
		pila = pila->siguiente;
	return (pila);
}

void	ft_lstadd_back(t_pila **alst, t_pila *new)
{
	t_pila	*last;

	if (alst)
	{
		if (*alst)
		{
			last = ultimo_t_pila(*alst);
			last->siguiente = new;
		}
		else
			*alst = new;
	}
}

int	ft_nbrlen_base(int n, unsigned int base)
{
	unsigned int	nbr;
	int				i;

	i = 1;
	if (!(base >= 2 && base <= 16))
		base = 10;
	nbr = ft_abs(n);
	while (nbr >= base && i++)
		nbr /= base;
	return (i);
}

unsigned int	ft_abs(int n)
{
	if (n < 0)
		return ((unsigned int)(-1 * n));
	return ((unsigned int)n);
}
