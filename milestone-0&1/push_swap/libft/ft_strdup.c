/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 20:18:57 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/26 23:20:53 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	ssize;
	char	*str;

	ssize = ft_strlen(s) + 1;
	str = malloc(ssize);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s, ssize);
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char *test_str;
	char *result;

	test_str = "hello";
	result = ft_strdup(test_str);
	printf("Original string: %s\n", test_str);
	printf("Duplicated string: %s\n", result);
	free(result);
}*/