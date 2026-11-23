/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:55:14 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/26 23:14:32 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	siz;
	void	*s;

	siz = nmemb * size;
	if (nmemb != 0 && siz / nmemb != size)
		return (NULL);
	s = malloc(siz);
	if (s == NULL)
		return (NULL);
	ft_memset(s, 0, siz);
	return (s);
}

/*#include <stdio.h>

int	main(void)
{
	char *s2;
	char *overflow;

	s2 = ft_calloc(4, 1);
	printf("%d\n", s2[0]);
	printf("%d\n", s2[1]);
	printf("%d\n", s2[2]);
	printf("%d\n", s2[3]);
	free(s2);

	overflow = ft_calloc(((size_t)-1), 2);
	printf("%p\n", overflow);
	free(overflow);
}*/