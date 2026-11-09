/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:08:02 by sabzakh           #+#    #+#             */
/*   Updated: 2026/11/09 13:08:19 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
