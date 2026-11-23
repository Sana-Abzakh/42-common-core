/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 23:18:14 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/27 12:21:54 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
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
	ft_lstadd_front(&n2, n1);
	printf("last node content : %s\n", (char *)ft_lstlast(n1)->content);
	ft_lstadd_back(&n2, n3);
	printf("last node content : %s\n", (char *)ft_lstlast(n1)->content);
	free(n1->next->next);
	free(n1->next);
	free(n1);
}*/
