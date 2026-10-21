/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 18:21:54 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/21 15:57:35 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
/*
#include <stdio.h>

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

	return (0);
}*/