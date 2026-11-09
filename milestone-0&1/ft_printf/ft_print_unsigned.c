/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:48:48 by sabzakh           #+#    #+#             */
/*   Updated: 2026/11/09 13:05:39 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	long	num;
	int		count;
	char	c;

	num = n;
	count = 0;
	if (num >= 10)
		count += ft_print_unsigned(num / 10);
	c = (num % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}
