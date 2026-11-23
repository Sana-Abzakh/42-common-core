/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 23:19:21 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/27 12:08:29 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*#include <stdio.h>

int	main(void)
{
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	n1 = ft_lstnew("42");
	n2 = ft_lstnew("43");
	n3 = ft_lstnew("44");
	ft_lstadd_back(&n1, n2);
	ft_lstadd_front(&n3, n2);
	printf("Size of the list: %u\n", ft_lstsize(n1));
	free(n2->next);
	free(n1->next);
	free(n3);
}*/
