/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:06:36 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/26 23:30:47 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*s;
	size_t	i;

	i = ft_count(n);
	num = n;
	s = malloc(i + 1);
	if (!s)
		return (NULL);
	s[i] = '\0';
	if (num < 0)
	{
		s[0] = '-';
		num *= -1;
	}
	if (num == 0)
		s[0] = '0';
	while (num != 0)
	{
		--i;
		s[i] = (num % 10) + '0';
		num /= 10;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	int		n;
	char	*str;

	n = -12345;
	str = ft_itoa(n);
	printf("Integer: %d, String: %s\n", n, str);
	free(str);
	return (0);
}*/
