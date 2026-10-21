/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 17:50:52 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/21 14:21:43 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>

int	main(void)
{
	char test1 = '0';
	int test2 = -3;
	char test3 = 'l';
	printf("testing %c : %d \n", test1, ft_isascii(test1));
	printf("testing %d : %d \n", test2, ft_isascii(test2));
	printf("testing %c : %d \n", test3, ft_isascii(test3));
	return (0);
}*/