/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimar <arimar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:34:50 by papa              #+#    #+#             */
/*   Updated: 2022/11/27 17:05:49 by arimar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

static int	check_repetido(char **argv)
{
	int		i;
	int		j;
	
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[j])
		{
			if (j != i && check_arg_comp(argv[i], argv[j]) == 0)
				return (1);
			j++;
		}
		i++
	}
	return (0);
}

int	check_ok(char **argv)
{
	int	i;
	int j;

	j = 0;
	i = 1;
	while (argv[i])
	{
		if (!check_arg_digit(argv[i]))
			return (0);
		j += check_zero(argv[i]);
		i++;				
	}
	if (j > 1)
		return (0);
	if (check_repetido(argv))
		return (0);
	return (1);
}

int	check_arg_digit(char *argv)
{
	int i;

	i = 0;
	if (check_sign(argv[i]) && argv[i+1])
	i++;
	while (argv[i] && check_digit(argv[i]))
		i++;
	if (argv[i] && !check_digit(argv[i]))
		return(0);
	return (1);
}