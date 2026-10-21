/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 20:40:18 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/21 15:21:37 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (dst[j] && j < size)
		j++;
	i = j;
	while (src[j - i] && j + 1 < size)
	{
		dst[j] = src[j - i];
		j++;
	}
	if (i < size)
		dst[j] = '\0';
	return (i + ft_strlen(src));
}

#include <stdio.h>

int	main(void)
{
	char dst[20] = "Hello, ";
	const char *src = "World!";
	size_t size = sizeof(dst);

	size_t result = ft_strlcat(dst, src, size);
	printf("Result: %zu\n", result);
	printf("Concatenated string: %s\n", dst);
	return (0);
}