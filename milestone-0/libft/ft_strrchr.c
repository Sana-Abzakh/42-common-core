/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 17:33:39 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/21 15:39:57 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*v;
	char			cc;

	cc = (char)c;
	v = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			v = (char *)&s[i];
		i++;
	}
	if ((char)c == '\0')
		v = ((char *)&s[i]);
	return (v);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *str = "Hello world";

	printf("Found at index:%ld\n", ft_strrchr(str, 'o') - str);
	return (0);
}*/