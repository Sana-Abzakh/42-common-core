/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 19:39:49 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/26 23:19:30 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		cc;
	size_t				i;

	str = (const unsigned char *)s;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == cc)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*str = "hello 42";
	char		*found;

	found = (char *)ft_memchr(str, '4', strlen(str));
	if (found)
		printf("found '4' at index %td\n", found - str);   //pointer diff = inde
	else
		printf("not found\n");
}*/
