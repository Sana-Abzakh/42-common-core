/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:48:59 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/31 19:57:45 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_spec(char c, va_list *ap)
{
	if (c == 'c')
		return (ft_print_char(va_arg(*ap, int)));
	if (c == 's')
		return (ft_print_str(va_arg(*ap, char *)));
	if (c == 'p')
		return (ft_print_ptr(va_arg(*ap, void *)));
	if (c == 'd' || c == 'i')
		return (ft_print_nbr(va_arg(*ap, int)));
	if (c == 'u')
		return (ft_print_unsigned(va_arg(*ap, unsigned int)));
	if (c == 'x' || c == 'X')
		return (ft_print_hex(va_arg(*ap, unsigned int), c));
	if (c == '%')
		return (ft_print_char('%'));
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		i;
	int		tmp;

	if (!format)
		return (-1);
	va_start(ap, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			tmp = handle_spec(format[i], &ap);
			if (tmp < 0)
			{
				if (write(1, "%", 1) < 0)
					return (-1);
				count++;
				if (write(1, &format[i], 1) < 0)
					return (-1);
				count++;
			}
			else
				count += tmp;
		}
		else if (write(1, &format[i], 1) < 0)
			return (-1);
		else
			count++;
		i++;
	}
	va_end(ap);
	return (count);
}
/*#include <stdio.h>

int	main(void)
{
	int ft, pf;

	ft = ft_printf("ft: %c \n", 'A');
	pf = printf("pf: %c \n", 'A');
	printf("  -> %d vs %d\n\n", ft, pf);

	ft = ft_printf("ft: [%s]\n", "hello");
	pf = printf("pf: [%s]\n", "hello");
	printf("  -> %d vs %d\n\n", ft, pf);

	ft = ft_printf("ft: [%p]\n", (void *)0x42);
	pf = printf("pf: [%p]\n", (void *)0x42);
	printf("  -> %d vs %d\n\n", ft, pf);

	ft = ft_printf("ft: [%d]\n", -42);
	pf = printf("pf: [%d]\n", -42);
	printf("  -> %d vs %d\n\n", ft, pf);

	ft = ft_printf("ft: [%i]\n", 42);
	pf = printf("pf: [%i]\n", 42);
	printf("  -> %d vs %d\n\n", ft, pf);

	ft = ft_printf("ft: [%u]\n", 42);
	pf = printf("pf: [%u]\n", 42);
	printf("  -> %d vs %d\n\n", ft, pf);

	ft = ft_printf("ft: [%x]\n", 255);
	pf = printf("pf: [%x]\n", 255);
	printf("  -> %d vs %d\n\n", ft, pf);

	ft = ft_printf("ft: [%X]\n", 255);
	pf = printf("pf: [%X]\n", 255);
	printf("  -> %d vs %d\n\n", ft, pf);

	ft = ft_printf("ft: [%%]\n");
	pf = printf("pf: [%%]\n");
	printf("  -> %d vs %d\n\n", ft, pf);
    
	ft = ft_printf("ft: [%c%s%d%%]\n", 'Z', " ok", -7);
	pf = printf("pf: [%c%s%d%%]\n", 'Z', " ok", -7);
	printf("  -> %d vs %d\n", ft, pf);
	return (0);
}*/