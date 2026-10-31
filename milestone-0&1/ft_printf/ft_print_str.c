/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:48:41 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/31 15:48:42 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *s)
{
	int	len;

	if (!s)
		return (write(1, "(null)", 6));
	len = 0;
	while (s[len])
		len++;
	return (write(1, s, len));
}

/*#include <stdio.h>

int	main(void)
{
	int s = ft_print_str("hello!");
	printf("\n %d \n", s);
	return (0);
}*/