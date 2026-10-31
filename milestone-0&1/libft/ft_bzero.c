/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 15:28:07 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/26 23:14:26 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		tmp[i] = 0;
		i++;
	}
}

/*#include <stdio.h>

int	main(void)

{
	char test_str[] = "hello";
	ft_bzero(test_str + 2, 3);
	printf(" hello becomes :%s \n", test_str);
}*/