/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <sabzakh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:48:34 by sabzakh           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/10/31 19:45:07 by sabzakh          ###   ########.fr       */
=======
/*   Updated: 2026/11/02 14:09:20 by sabzakh          ###   ########.fr       */
>>>>>>> 9aa508ef251138f7e87c00bbdb0f4f6844da2b82
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
