/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 18:54:07 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/21 15:59:36 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c = c - 32);
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	char test1;
	char test2;
	char test3;
	char test4;

	test1 = 'a';
	test2 = 'B';
	test3 = '5';
	test4 = '!';
	printf("Testing '%c': %c \n", test1, ft_toupper(test1));
	printf("Testing '%c': %c \n", test2, ft_toupper(test2));
	printf("Testing '%c': %c \n", test3, ft_toupper(test3));
	printf("Testing '%c': %c \n", test4, ft_toupper(test4));
}*/