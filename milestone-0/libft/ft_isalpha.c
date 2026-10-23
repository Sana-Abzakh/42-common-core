/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 19:51:52 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/23 13:13:29 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	ft_isalpha(int c);
int	main(void)
{
	char test1;
	char test2;
	char test3;
	char test4;

	test1 = 'a';
	test2 = 'Z';
	test3 = '\0';
	test4 = '@';
	printf("Testing '%c': %d \n", test1, ft_isalpha(test1));
	printf("Testing '%c': %d \n", test2, ft_isalpha(test2));
	printf("Testing '%c': %d \n", test3, ft_isalpha(test3));
	printf("Testing '%c': %d \n", test4, ft_isalpha(test4));
	return (0);
}*/