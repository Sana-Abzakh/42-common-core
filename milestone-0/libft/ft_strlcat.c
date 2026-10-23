/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 20:40:18 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/23 22:29:32 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	i;

	dlen = 0;
	while (dst[dlen] && dlen < size)
		dlen++;
	i = 0;
	while (src[i] && dlen + i + 1 < size)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	if (dlen < size)
		dst[dlen + i] = '\0';
	return (dlen + ft_strlen(src));
}
/*
#include <stdio.h>

int	main(void)
{
	char dst[20] = "Hello, ";
	const char *src = "World!";

	size_t result = ft_strlcat(dst, src, 0);
	printf("Result: %zu\n", result);
	printf("Concatenated string: %s\n", dst);
	return (0);
}*/