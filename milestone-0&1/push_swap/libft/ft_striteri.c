/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 20:53:37 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/26 23:33:05 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

static void	inc(unsigned int i, char *c)
{
	(void)i;
	(*c)++;
}

int	main(void)
{
	char str[] = "Hello, World!";

	ft_striteri(str, inc);
	printf("Modified string: %s\n", str);
	return (0);
}*/