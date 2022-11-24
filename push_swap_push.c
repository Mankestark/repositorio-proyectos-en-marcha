/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimar <arimar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:34:45 by papa              #+#    #+#             */
/*   Updated: 2022/11/22 23:01:20 by arimar           ###   ########.fr       */
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
    Nodo *pila;
	if(!(pila = malloc(sizeof(Nodo))))
		return(NULL);
	pila->siguiente = NULL;
	return (pila);	
}
