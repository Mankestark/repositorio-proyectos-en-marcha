/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:34:45 by papa              #+#    #+#             */
/*   Updated: 2022/12/02 19:47:06 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

t_pila	*pusheo(int argc, char **argv)
{
	t_pila	*pila;
	int		i;

	pila = Creart_pila(atoi(argv[1]));
	i = 2;
	while (i < argc)
	{
		push(atoi(argv[i]), &pila);
		i++;
	}
	return (pila);
}

/*t_pila	*pilavacia(void)
{
	t_pila	*pila;

	if (!(pila = malloc(sizeof(t_pila))))
		return (NULL);
	pila->siguiente = NULL;
	return (pila);
}*/
