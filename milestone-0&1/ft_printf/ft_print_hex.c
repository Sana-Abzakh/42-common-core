/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:48:18 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/31 16:14:23 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, char format)
{
	char	*digits;
	int		count;

	if (format == 'X')
		digits = "0123456789ABCDEF";
	else
		digits = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_print_hex(n / 16, format);
	count += write(1, &digits[n % 16], 1);
	return (count);
}
/*#include <stdio.h>

int	main(void)
{
	int	n;

	n = ft_print_hex(0, 'x');
	printf("\n %d\n", n);
	n = ft_print_hex(255, 'x');
	printf("\n %d \n", n);
	n = ft_print_hex(255, 'X');
	printf("\n %d \n", n);
	n = ft_print_hex(4096, 'x');
	printf("\n %d\n", n);
	n = ft_print_hex(3735928559u, 'x');
	printf("\n  %d \n", n);
	n = ft_print_hex(4294967295u, 'X');
	printf("\n %d\n", n);
	return (0);
}*/
