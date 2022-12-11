/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mankestarkdev <mankestarkdev@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:52:59 by mankestarkd       #+#    #+#             */
/*   Updated: 2022/12/11 13:19:43 by mankestarkd      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	ft_words(const char *str, char c)
{
	int	words;

	words = 0;
	if (*str != c && *str)
		words++;
	while (*str)
	{
		while (*str == c)
		{
			str++;
			if (*str != c && *str)
				words++;
		}
		str++;
	}
	return (words);
}

static int	letters(const char *str, char c)
{
	int	len;

	len = 0;
	while (*str != c && *str)
	{
		len++;
		str++;
	}
	return (len);
}

static char	**allocate_tab(char const *s, char c)
{
	char	**tab;

	tab = (char **)malloc(sizeof(char *) * (ft_words(s, c) + 2));
	if (!s || (!(tab)))
		return (NULL);
	return (tab);
}

char	**ft_strsplit(char const *s, char c)
{
	int		j;
	int		i;
	char	**tab;

	j = 1;
	i = 0;
	tab = allocate_tab(s, c);
	tab[0] = ft_strnew(1);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			tab[j] = (char *)malloc(sizeof(char) * (letters(s, c) + 1));
			if (!(tab[j]))
				return (NULL);
			while (*s && *s != c)
				tab[j][i++] = (char)*s++;
			tab[j][i] = '\0';
			j++;
			i = 0;
		}
	}
	tab[j] = NULL;
	return (tab);
}

char	*ft_strnew(size_t size)
{
	char	*mem;

	mem = (void *)malloc(sizeof(char) * (size + 1));
	if (!(mem))
		return (NULL);
	mem[size] = '\0';
	ft_bzero(mem, size);
	return (mem);
}
