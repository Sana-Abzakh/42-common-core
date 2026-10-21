/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:06:36 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/21 14:30:05 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_digits(int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		count = 1;
	else
	{
		if (n < 0)
			count++;
		while (n)
		{
			n /= 10;
			count++;
		}
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	num;

	num = n;
	len = ft_count_digits(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		len--;
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
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
