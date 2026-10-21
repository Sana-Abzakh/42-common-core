/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 19:27:44 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/21 15:58:37 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c = c + 32);
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
	printf("Testing '%c': %c \n", test1, ft_tolower(test1));
	printf("Testing '%c': %c \n", test2, ft_tolower(test2));
	printf("Testing '%c': %c \n", test3, ft_tolower(test3));
	printf("Testing '%c': %c \n", test4, ft_tolower(test4));
}*/