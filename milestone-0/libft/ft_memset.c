/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 19:57:15 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/26 23:20:14 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)s;
	while (n > 0)
	{
		*temp = (unsigned char)c;
		temp++;
		n--;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	char test_str[] = "hello"; // modifiable array 
	ft_memset(test_str + 2, 'x', 3);
	printf("hello becomes: %s\n", test_str);
}*/
