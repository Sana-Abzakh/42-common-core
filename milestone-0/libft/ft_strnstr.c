/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 13:04:33 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/26 23:21:38 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while ((i + j) < len && little[j] && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	//null in pionter format is nill
	printf("%s\n", ft_strnstr("hello", "ll", 5));  
	printf("%p\n", ft_strnstr("hello", "ll", 3)); 
	printf("%p\n", ft_strnstr("hello", "llo", 4)); 
	printf("%s\n", ft_strnstr("hello", "llo", 5)); 
	printf("%s\n", ft_strnstr("hello", "", 0));    
	printf("%p\n", ft_strnstr("hello", "z", 5));   
	return (0);
}*/
