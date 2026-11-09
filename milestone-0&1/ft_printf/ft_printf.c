/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <sabzakh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:48:59 by sabzakh           #+#    #+#             */
/*   Updated: 2026/11/05 13:24:42 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_spec(char c, va_list *ap)
{
	if (c == 'c')
		return (ft_print_char(va_arg(*ap, int)));
	else if (c == 's')
		return (ft_print_str(va_arg(*ap, char *)));
	else if (c == 'p')
		return (ft_print_ptr(va_arg(*ap, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_print_nbr(va_arg(*ap, int)));
	else if (c == 'u')
		return (ft_print_unsigned(va_arg(*ap, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_print_hex(va_arg(*ap, unsigned int), c));
	else if (c == '%')
		return (ft_print_char('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		i;

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
			count += handle_spec(format[i], &ap);
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(ap);
	return (count);
}

/*#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int x = 0;
	int count = 0;

	count += ft_printf("%c\n",'c');
	count += ft_printf("%s\n", "hello");
	count += ft_printf("%s\n",NULL);
	count += ft_printf("%p\n",&x);
	count += ft_printf("%p\n", NULL);
	count += ft_printf("%p\n", (void *)0);
	count += ft_printf("%d\n", INT_MIN);
	count += ft_printf("%i\n", INT_MIN);
	count += ft_printf("%u\n", 5345);
	count += ft_printf("%x\n", 255);
	count += ft_printf("%X\n", 255);
	count += ft_printf("100%%\n");
	ft_printf("%d", count);
	
}*/