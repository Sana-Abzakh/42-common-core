/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <sabzakh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 17:44:08 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/09 18:43:20 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	unsigned char	tmp;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (dest);
	while (n > 0)
	{
		tmp_src = tmp;
		tmp = tmp_dst;
		tmp_src++;
		tmp_dst++;
		tmp++;
		n--;
	}
}
