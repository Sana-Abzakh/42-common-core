/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <sabzakh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:49:08 by sabzakh           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/10/31 19:48:24 by sabzakh          ###   ########.fr       */
=======
/*   Updated: 2026/11/02 12:02:36 by sabzakh          ###   ########.fr       */
>>>>>>> 9aa508ef251138f7e87c00bbdb0f4f6844da2b82
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_print_char(char c);
int	ft_print_str(char *s);
int	ft_print_nbr(int n);
int	ft_print_unsigned(unsigned int n);
int	ft_print_hex(unsigned int n, char format);
int	ft_print_ptr(void *ptr);

#endif