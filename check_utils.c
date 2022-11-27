/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papa <papa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 10:11:53 by papa              #+#    #+#             */
/*   Updated: 2022/11/27 10:51:20 by papa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

int check_digit(char c)
{
    return(c >= '0' && c <= '9');
}

int check_sign(char c)
{
    return(c == '+' || c == '-');
}

int check_diff_sign(const char *c1, const char *c2)
{
    int i;
    int j;
    
    i = 0;
    j = i;
    if (c1[i] == '+')
    {
        if c2[j]
            i++;
    }
    else 
    {
            if (c2[j] == '+')
                j++;
    }
    while (c1[i] && c2[j] && c1 == c2[j])
    {
        i++;
        j++;
    }
    return ((unsigned char)c1[i] - (unsigned char)c2[j]);
}
