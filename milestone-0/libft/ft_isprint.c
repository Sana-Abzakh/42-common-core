/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 18:24:17 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/26 23:14:58 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>

int	main(void)
{
	char test1;
	int test2;
	char test3;

	test1 = '0';
	test2 = '\n';
	test3 = 'l';
	printf("testing %c : %d \n", test1, ft_isprint(test1));
	printf("testing %d : %d \n", test2, ft_isprint(test2));
	printf("testing %c : %d \n", test3, ft_isprint(test3));
	return (0);
}*/