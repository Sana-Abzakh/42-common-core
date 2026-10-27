/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 23:18:58 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/27 12:25:45 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
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
	printf("Last node content: %s\n", (char *)ft_lstlast(n1->content));
	free(n2->next);
	free(n1->next);
	free(n3);
}*/
