/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 17:44:08 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/21 14:43:13 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (dest < source)
	{
		while (len--)
			*dest++ = *source++;
	}
	else
	{
		dest += len;
		source += len;
		while (len--)
			*--dest = *--source;
	}
	return (dst);
}
/*
#include <stdio.h>

int	main(void)
{
	char test_src[] = "hi";
	char test_dst[] = "hey";
	ft_memmove(test_dst, test_src, 2);
	printf("result : %s \n", test_dst);
}*/