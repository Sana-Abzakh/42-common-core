/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <sabzakh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:48:59 by sabzakh           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/10/31 19:57:45 by sabzakh          ###   ########.fr       */
=======
/*   Updated: 2026/11/05 13:24:42 by sabzakh          ###   ########.fr       */
>>>>>>> 9aa508ef251138f7e87c00bbdb0f4f6844da2b82
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_spec(char c, va_list *ap)
{
	if (c == 'c')
		return (ft_print_char(va_arg(*ap, int)));
<<<<<<< HEAD
	if (c == 's')
=======
	else if (c == 's')
>>>>>>> 9aa508ef251138f7e87c00bbdb0f4f6844da2b82
		return (ft_print_str(va_arg(*ap, char *)));
	else if (c == 'p')
		return (ft_print_ptr(va_arg(*ap, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_print_nbr(va_arg(*ap, int)));
	else if (c == 'u')
		return (ft_print_unsigned(va_arg(*ap, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_print_hex(va_arg(*ap, unsigned int), c));
<<<<<<< HEAD
	if (c == '%')
		return (ft_print_char('%'));
	return (-1);
=======
	else if (c == '%')
		return (ft_print_char('%'));
	return (0);
>>>>>>> 9aa508ef251138f7e87c00bbdb0f4f6844da2b82
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
<<<<<<< HEAD
/*#include <stdio.h>
=======

/*#include <limits.h>
#include <stdio.h>

>>>>>>> 9aa508ef251138f7e87c00bbdb0f4f6844da2b82

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