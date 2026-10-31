/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 18:21:54 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/26 23:21:55 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	ssize;

	if (!s)
		return (NULL);
	ssize = ft_strlen(s);
	if (start >= ssize)
		len = 0;
	else if (len > ssize - start)
		len = ssize - start;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}

/*#include <stdio.h>

int	main(void)
{
	char *result;
	char *result2;
	char *result3;
	char *result4;

	result = ft_substr("Hello, World!", 7, 5);
	result2 = ft_substr("Hello, World!", 0, 5);
	result3 = ft_substr("Hello, World!", 20, 5);
	result4 = ft_substr(NULL, 0, 5);

	printf("Result: %s\n", result);   // Output: "World"
	printf("Result2: %s\n", result2); // Output: "Hello"
	printf("Result3: %s\n", result3); // Output: ""
	printf("Result4: %s\n", result4); // Output: (null)

	free(result);
	free(result2);
	free(result3);
	free(result4);
	
}*/