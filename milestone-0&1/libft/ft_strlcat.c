/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 20:40:18 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/26 23:21:10 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dl;
	size_t	sl;

	dl = 0;
	sl = ft_strlen(src);
	while (dl < size && dst[dl])
	{
		dl++;
	}
	if (dl == size)
	{
		return (size + sl);
	}
	i = 0;
	while (src[i] && (dl + i + 1) < (size))
	{
		dst[dl + i] = src[i];
		i++;
	}
	dst[dl + i] = '\0';
	return (dl + sl);
}

/*
#include <stdio.h>

int	main(void)
{
	char dst[20] = "Hello, ";
	const char *src = "World!";

	size_t result = ft_strlcat(dst, src, 0);
	printf("Result: %zu\n", result);s
}*/