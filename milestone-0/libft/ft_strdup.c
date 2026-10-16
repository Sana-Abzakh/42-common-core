/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <sabzakh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 20:18:57 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/16 20:18:59 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*new_s;
	int		i;

	i = 0;
	new_s = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!new_s)
		return (NULL);
	while (*src)
		new_s[i++] = *src++;
	new_s[i] = '\0';
	return (new_s);
}
