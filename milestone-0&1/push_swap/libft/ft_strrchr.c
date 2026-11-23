/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 17:33:39 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/26 23:21:43 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	char	*s;

	s = "hello world!";
	printf("%s\n", ft_strrchr(s, 'l'));
	printf("%s\n", ft_strrchr(s, '\0'));
	printf("%s\n", ft_strrchr(s, 'h'));
	printf("%p\n", ft_strrchr(s, 'H'));
}*/
