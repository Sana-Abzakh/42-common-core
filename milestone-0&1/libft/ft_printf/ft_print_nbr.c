/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <sabzakh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:48:25 by sabzakh           #+#    #+#             */
/*   Updated: 2026/11/02 14:09:35 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	long	num;
	int		count;
	char	c;

	num = n;
	count = 0;
	if (num < 0)
	{
		count += write(1, "-", 1);
		num = -num;
	}
	if (num >= 10)
		count += ft_print_nbr(num / 10);
	c = (num % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}
