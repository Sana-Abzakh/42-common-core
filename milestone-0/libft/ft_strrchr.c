/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <sabzakh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 15:55:40 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/10 16:57:59 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*v;
	char			cc;

	cc = (char)c;
	v = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			v = (char *)&s[i];
		i++;
	}
	if ((char)c == '\0')
		v = ((char *)&s[i]);
	return (v);
}
