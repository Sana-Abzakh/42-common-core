/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 16:51:45 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/21 14:40:39 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (const unsigned char *)src;
	if (src == NULL && dst == NULL)
		return (dst);
	while (n > 0)
	{
		*tmp_dst = *tmp_src;
		tmp_src++;
		tmp_dst++;
		n--;
	}
	return (dst);
}
/*
#include <stdio.h>

int	main(void)
{
	char *dst;
	const char *src;

	src = "hello";
	dst = malloc(6);
	ft_memcpy(dst, src, 2);
	printf("result : %s\n", dst);
	free(dst);
}*/