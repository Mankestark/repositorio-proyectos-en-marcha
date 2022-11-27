/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papa <papa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:34:45 by papa              #+#    #+#             */
/*   Updated: 2022/11/27 10:56:41 by papa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"


Nodo   *pusheo(int argc, char **argv)
{
	Nodo* pila;
    int i;

	pila = CrearNodo(ft_atoi(argv[1]));
	i = 2;
	while (i < argc)
	{
        push(ft_atoi(argv[i]), &pila);
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
