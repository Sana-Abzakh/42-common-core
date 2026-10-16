/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 17:33:39 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/12 13:02:49 by sabzakh          ###   ########.fr       */
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
