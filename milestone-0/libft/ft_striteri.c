/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 20:53:37 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/21 15:55:04 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
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