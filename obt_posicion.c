/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   obt_posicion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 06:29:27 by mankestarkd       #+#    #+#             */
/*   Updated: 2022/12/07 06:56:19 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	dar_posicion(t_pila **pila)
{
	t_pila	*temp;
	int		i;

	temp = *pila;
	i = 0;
	while (tem)
	{
		temp->pos = i;
		temp = temp->siguiente;
		i++;
	}
}

static int	obt_objetivo(t_pila **pila_a, int b_index, int obj_index,
		int obj_posicion)
{
	t_pila	*temp_a;

	temp_a = *pila_a;
	while (temp_a)
	{
		if (temp_a->index > b_index && temp_a->index < obj_index)
		{
			obj_index = temp_a->index;
			obj_posicion = temp_a->pos;
		}
	}
	if (obj_index != INT_MAX)
		return (obj_posicion);
	temp_a = *pila_a;
	while (pila_a)
	{
		if (temp_a->index < obj_index)
		{
			obj_index = temp_a->index;
			obj_posicion = tem_a->pos;
		}
		temp_a = temp_a->siguiente;
	}
	return (obj_posicion);
}

void	obt_posicion_objetivo(t_pila **pila_a, t_pila **pila_b)
{
	t_pila	*temp_b;
	int		obj_pos;

	temp_b = *pila_b;
	dar_posicion(pila_a);
	dar_posicion(pila_b);
	obj_pos = 0;
	while (temp_b)
	{
		obj_pos = obt_objetivo(pila_a temp_b->index, INT_MAX, obj_pos);
		temp_b->obj_pos = obj_pos;
		temp_b = temp_b->siguiente;
	}
}
