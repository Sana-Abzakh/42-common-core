/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <sabzakh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 16:51:45 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/09 17:24:58 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (const unsigned char *)src;
	if (src == NULL && dst == NULL)
		return (dst);
	while (n > 0)
	{
		*tmp_dst = *tmp_src;
		tmp_src++;
		tmp_dst++;
		n--;
	}
	return (dst);
}
