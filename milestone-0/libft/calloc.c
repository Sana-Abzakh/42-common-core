/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:55:14 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/12 17:07:57 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(nmemb * size);

	if (! ptr)
		return(NULL);
	while(len < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
