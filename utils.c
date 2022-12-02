/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:56:56 by arimar            #+#    #+#             */
/*   Updated: 2022/12/02 11:21:08 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

Nodo	*CrearNodo(int numb)
{
	Nodo	*nodo;

	nodo = malloc(sizeof(Nodo));
	nodo->numb = numb;
	nodo->siguiente = NULL;
	return (nodo);
}

void	push(int numb, Nodo **pila)
{
	Nodo	*nodo;

	nodo = CrearNodo(numb);
	nodo->siguiente = *pila;
	*pila = nodo;
}
int	pop(Nodo **pila)
{
	Nodo	*eliminar;
	int		data;

	if (*pila == NULL)
		printf("La pila esta vacia\n");
	else
	{
		eliminar = *pila;
		data = eliminar->numb;
		*pila = (*pila)->siguiente;
		free(eliminar);
	}
	return (data);
}

int	Cima(Nodo **pila)
{
	if (*pila == NULL)
		return (0);
	else
		return ((*pila)->numb);
}
void	imprimirpila(Nodo **pila)
{
	Nodo	*temp;

	temp = *pila;
	while (temp)
	{
		printf("%d\n", temp->numb);
		temp = temp->siguiente;
	}
}

int taman_pila(Nodo **pila)
{
	int i;

	i = 0;
	if (!(*pila))
		return (0);
	while (*pila)
	{
		*pila = (*pila) -> siguiente;
		i++;
	}
	return(i);
}

int pila_ordenada(Nodo **pila)
{
	while ((*pila) -> siguiente != NULL)
	{
		if ((*pila)->numb > (*pila)->siguiente->numb)
			return (0);
		*pila = (*pila)->siguiente;
	}
	return (1);
}

void init_index(Nodo *pilaA, int pila_lenght)
{
	Nodo	*i;
	Nodo	*j;
	int	k;

	while(--pila_lenght > 0)
	{
		i = pilaA;
		k = INT_MIN;
		j = NULL;
		while(i)
		{
			if (i->k == INT_MIN && i->index == 0)
				i->index = 1;
			if (i->k > k && i->index == 0)
			{
				k = i->k;
				k = i;
				i = pilaA;
			}
			else (i = i->siguiente;
		}
		if (k != NULL);
			k->index = pila_lenght;
	}
}

Nodo *ultimo_nodo(Nodo *pila)
{
	while(pila && pila->siguiente != NULL)
		pila = pila->siguiente;
	return(pila);
}

Nodo *penultimo_nodo(Nodo *pila)
{
	while (pila && pila->siguiente && pila->siguiente->siguiente != NULL)
		pila = pila->siguiente;
	retrun (pila);
}