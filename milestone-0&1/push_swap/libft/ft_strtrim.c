/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:07:28 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/26 23:28:38 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strim;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	strim = (char *)malloc(end - start + 1);
	if (!strim)
		return (NULL);
	ft_memcpy(strim, s1 + start, end - start);
	strim[end - start] = '\0';
	return (strim);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*set;
	char	*result;

	s1 = "Hellooo,World!  ";
	set = " ";
	result = ft_strtrim(s1, set);
	if (result)
	{
		printf("Trimmed string: '%s'\n", result);
		free(result);
	}
	return (0);
}*/
