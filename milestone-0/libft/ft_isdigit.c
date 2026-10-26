/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 21:11:39 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/26 23:14:52 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (c);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char test1 = '0';
	int test2 = -1;
	char test4 = '9';
	printf("testing %c : %d \n", test1, ft_isdigit(test1));
	printf("testing %d : %d \n", test2, ft_isdigit(test2));
	printf("testing %c : %d \n", test4, ft_isdigit(test4));
	return (0);
}*/