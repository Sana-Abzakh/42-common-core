/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:48:09 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/31 15:48:11 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_c(char c)
{
	return (write(1, &c, 1));
}

/*#include <stdio.h>

int	main(void)
{
	int c = ft_print_c('S');
	printf("\n%d \n", c);
	return (0);
}*/