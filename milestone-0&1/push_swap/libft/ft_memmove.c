/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 23:19:53 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/26 23:19:57 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (n == 0)
		return (d);
	i = n - 1;
	if (d > s)
	{
		while (i > 0)
		{
			d[i] = s[i];
			i--;
		}
		d[i] = s[i];
	}
	else
		ft_memcpy(d, s, n);
	return (d);
}
/*
#include <stdio.h>

int	main(void)
{
	char arr[16] = "0123456789";

	ft_memmove(arr + 3, arr, 5);

	printf("memmove OVERLAP (dst > src): \"%s\"\n", arr);
}*/