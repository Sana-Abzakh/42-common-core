/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:55:14 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/21 14:10:36 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	size_t			x;
	unsigned char	*ptr;

	i = 0;
	x = nmemb * size;
	if (nmemb != 0 && x / nmemb != size)
		return (NULL);
	ptr = malloc(x);
	if (!ptr)
		return (NULL);
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = ft_calloc(4, 5);
	printf("%s", str);
	free(str);
}*/
