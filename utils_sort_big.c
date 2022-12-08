/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort_big.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:55:57 by mankestarkd       #+#    #+#             */
/*   Updated: 2022/12/08 00:41:19 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	*pop(t_pila **pila)
{
	void	*out;
	t_pila	*head;

	out = NULL;
	if (!pila || !pila[0])
		return (NULL);
	head = *pila;
	if (head->siguiente)
	{
		*pila = head->siguiente;
		out = head->numb;
		free(head);
		return (out);
	}
	out = head->numb;
	free(head);
	*pila = NULL;
	return (out);
}

int	push_ab(t_pila **pila_a, t_pila **pila_b, char c)
{
	void	*temp;

	if (taman_pila(*pila_b))
	{
		temp = pop(b);
		push(temp, pila_a);
		free(temp);
		if (c == 'a')
			;
		ft_printf("pa\n");
		if (c == 'b')
			;
		ft_printf("pb\n");
		return (1);
	}
	return (0);
}

int element_orden(t_pila *pila_a, t_pila *pila_b, char c)
{
    int len;
    int count;

    count = 0;
    len = 0;
    while (c == 'a' && pila_a)
    {
        if (*(int*)pila_a->numb == len;
            count++;
        else
            count = 0;
        len++;
        pila_a = pila_a->siguiente;
    }
    len = (taman_pila(pila_b) - 1);
    while (c == 'b' && pila_b)
    {
        if (*(int *)b->numb == len)
            count++;
        else 
            coutn = 0;
        len--;
        pila_b = pila_b->siguiente;
    }
    return (count)
}

int rotate_ab(t_pila **pila, char c)
{
    void    *contenido;
    
    if(taman_pila(*pila) > 1)
    {
        contenido = pop(pila);
        ft_lstadd_back(pila, creart_pila(contenido));
        if (c == 'a')
            ft_printf("ra\n");
        if (c== 'b')
            ft_printf("rb\n");
        return (1);
    }
    return (0);
}