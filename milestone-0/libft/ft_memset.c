/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 19:57:15 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/23 16:41:37 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;

	temp = (unsigned char *)b;
	while (len > 0)
	{
		*temp = (unsigned char)c;
		temp++;
		len--;
	}
	return (b);
}
/*
#include <stdio.h>

int	main(void)
{
	char str_test[] = "Hello World!";
	printf("Before ft_memset: %s\n", str_test);

	ft_memset(str_test, '0', 5);
	printf("After ft_memset:  %s\n", str_test);

	return (0);
}*/