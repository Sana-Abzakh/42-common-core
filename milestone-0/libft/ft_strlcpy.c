/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:33:50 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/23 19:53:04 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t	slen;
	size_t	i;

	slen = 0;
	while (src[slen])
		slen++;
	if (dsize == 0)
		return (slen);
	i = 0;
	while (src[i] && i < (dsize - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (slen);
}
/*
#include <stdio.h>

int	main(void)
{
	char dst[20] = "Hello, ";
	const char *src = "World!";

	size_t result = ft_strlcpy(dst, src, 20);

	printf("Result: %zu, dst: \"%s\"\n", result, dst);
	return (0);
}*/