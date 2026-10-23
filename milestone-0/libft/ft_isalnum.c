/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 21:45:25 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/23 16:06:06 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	ft_isalnum(int c);
int	main(void)
{
	int test1 = '0';
	int test2 = -'/';
	int test3 = 'l';
	printf("testing %c : %d \n", test1, ft_isalnum(test1));
	printf("testing %d : %d \n", test2, ft_isalnum(test2));
	printf("testing %c : %d \n", test3, ft_isalnum(test3));
	return (0);
}*/