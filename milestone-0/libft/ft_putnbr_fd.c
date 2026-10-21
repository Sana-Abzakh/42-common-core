/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 16:47:47 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/21 15:04:01 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	x;

	x = n;
	if (x < 0)
	{
		write(fd, "-", 1);
		x = -x;
	}
	if (x >= 10)
	{
		ft_putnbr_fd((x / 10), fd);
	}
	c = (x % 10) + '0';
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int fd;

	fd = open("test.txt", O_RDWR);
	ft_putnbr_fd(-2147483648, fd);
	close(fd);
}*/