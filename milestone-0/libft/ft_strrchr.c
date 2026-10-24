/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 17:33:39 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/24 14:14:22 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	size_t	len;

	cc = (char)c;
	len = ft_strlen(s) + 1;
	while (len > 0)
	{
		len--;
		if (s[len] == cc)
			return ((char *)&s[len]);
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *str = "";
	char *res;

	res = ft_strrchr(str, 'a');
	if (res == NULL)
		printf("Not found\n");
	else
		printf("Found at index: %td\n", res - str);
	return (0);
}*/