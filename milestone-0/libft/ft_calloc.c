/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:55:14 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/25 20:04:57 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			x;
	unsigned char	*ptr;

	x = count * size;
	if (count != 0 && x / count != size)
		return (NULL);
	ptr = malloc(x);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, x);
	return (ptr);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str;

	str = ft_calloc(4, 5);
	printf("%zu", str);
	free(str);
}*/
