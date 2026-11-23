/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 18:33:08 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/26 23:19:36 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char	*s1;
	const char	*s2;

	s1 = "hello";
	s2 = "hey";
	printf("differ    : %d\n", ft_memcmp(s1, s2, 3));   
	printf("equal     : %d\n", ft_memcmp("abc", "abc", 3));  
	printf("n == 0    : %d\n", ft_memcmp("abc", "xyz", 0));  
	printf("binary NUL: %d\n", ft_memcmp("ab\0cd", "ab\0xy", 5)); 
	printf("unsigned  : %d\n", ft_memcmp("\xff", "\x01", 1));     
	return (0);
}
*/
