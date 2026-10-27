/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 23:18:25 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/27 11:56:28 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*#include <stdio.h>

int	main(void)
{
	t_list	*n1;
	t_list	*n2;

	n1 = ft_lstnew("42");
	printf("Before adding to front: %s\n", (char *)n1->content);
	n2 = ft_lstnew("41");
	ft_lstadd_front(&n1, n2);
	printf("After adding to front: %s\n", (char *)n1->content);
	free(n1->next);
	free(n1);
}*/
