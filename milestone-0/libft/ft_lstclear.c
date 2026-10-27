/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 23:18:33 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/27 13:20:12 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;

	if (!lst || !del || !*lst)
		return ;
	while (*lst)
	{
		list = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = list;
	}
}

/*#include <stdio.h>

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *n1;
	t_list *n2;
	t_list *n3;
	t_list *tmp;

	n1 = ft_lstnew(ft_strdup("42"));
	n2 = ft_lstnew(ft_strdup("43"));
	n3 = ft_lstnew(ft_strdup("44"));
	n1->next = n2;
	n2->next = n3;

	printf("before clear:\n");
	tmp = n1;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	ft_lstclear(&n1, del);

	printf("after clear, n1 = %p\n", (void *)n1);

	return (0);
}*/