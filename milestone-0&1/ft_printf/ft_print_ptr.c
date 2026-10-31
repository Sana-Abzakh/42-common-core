/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:48:34 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/31 15:48:35 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptr_hex(unsigned long n)
{
	char	*digits;
	int		count;

	digits = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_ptr_hex(n / 16);
	count += write(1, &digits[n % 16], 1);
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	int	count;

	if (!ptr)
		return (write(1, "(nil)", 5));
	count = 0;
	count += write(1, "0x", 2);
	count += ft_ptr_hex((unsigned long)ptr);
	return (count);
}

/*#include <stdio.h>

int	main(void)
{
	int x;
	int a;
	int b;

	a = printf("%p", (void *)&x);
	printf("\n");
	b = ft_print_ptr(&x);
	printf("\nreal = %d, mine = %d\n", a, b);
	a = printf("%p", NULL);
	printf("\n");
	b = ft_print_ptr(NULL);
	printf("\nreal = %d, mine = %d\n", a, b);
	return (0);
}*/