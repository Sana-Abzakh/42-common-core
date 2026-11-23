/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 23:18:43 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/27 12:44:38 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

/*#include <stdio.h>

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	n1 = ft_lstnew(ft_strdup("42"));
	n2 = ft_lstnew(ft_strdup("43"));
	n3 = ft_lstnew(ft_strdup("44"));
	n1->next = n2;
	n2->next = n3;
	printf("before del, last: %s\n", (char *)ft_lstlast(n1)->content);
	ft_lstdelone(n3, del);
	n2->next = NULL;
	printf("after del, last: %s\n", (char *)ft_lstlast(n1)->content);
	del(n2->content);
	free(n2);
	del(n1->content);
	free(n1);
}*/
