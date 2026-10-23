/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 15:28:07 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/23 16:56:19 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)s;
	while (n > 0)
	{
		*temp = '\0';
		temp++;
		n--;
	}
}
/*
#include <stdio.h>

int	main(void)

{
	char test_str[] = "hello";
	ft_bzero(test_str + 2, 3);
	printf(" hello becomes :%s \n", test_str);
}*/