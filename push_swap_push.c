/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papa <papa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:34:45 by papa              #+#    #+#             */
/*   Updated: 2022/11/21 19:41:34 by papa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

Nodo   *pusheo(int argc, char **argv)
{
	Nodo* pila;
    int i;

	pila = CrearNodo(atoi(argv[1]));
	i = 2;
	while (i < argc)
	{
        push(atoi(argv[i]), &pila);
        i++;
	}
    return (pila);
}
Nodo *pilavacia(void)
{
    
}
