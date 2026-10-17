/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <sabzakh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 19:09:08 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/17 19:09:12 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
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
    char *result;

    
    input = "abcde";
    result = ft_strmapi(input, cap_char);
    printf("Result:%s\n", result);
    free(result);
    return (0);
}
*/