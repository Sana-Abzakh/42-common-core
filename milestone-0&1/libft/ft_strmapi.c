/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 19:09:08 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/26 23:32:11 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s1;
	size_t	i;

	if (!s || !f)
		return (NULL);
	s1 = malloc(ft_strlen(s) + 1);
	if (!s1)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*
#include <stdio.h>
#include <stdlib.h>

char	cap_char(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

int	main(void)
{
	char const	*input;
	char		*result;

	input = "abcde";
	result = ft_strmapi(input, cap_char);
	printf("Result:%s\n", result);
	free(result);
	return (0);
}
*/