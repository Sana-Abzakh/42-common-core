/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 21:11:39 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/23 15:58:01 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (c);
	return (0);
}

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
}