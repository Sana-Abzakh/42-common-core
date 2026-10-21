/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 20:18:57 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/21 15:12:09 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*new_s;
	int		i;

	i = 0;
	new_s = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!new_s)
		return (NULL);
	while (*src)
		new_s[i++] = *src++;
	new_s[i] = '\0';
	return (new_s);
}
/*
#include <stdio.h>

int	main(void)
{
	char *test_str;
	char *result;

	test_str = "hello";
	result = ft_strdup(test_str);
	printf("Original string: %s\n", test_str);
	printf("Duplicated string: %s\n", result);
	free(result);
	return (0);
}*/