/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 23:18:58 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/26 23:45:07 by sabzakh          ###   ########.fr       */
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
/*
#include <stdio.h>

int	main(void)
{
	t_list *list;
	t_list *last_node;
	int value1 = 1;
	int value2 = 2;
	int value3 = 3;

	list = ft_lstnew(&value1);
	list->next = ft_lstnew(&value2);
	list->next->next = ft_lstnew(&value3);

	last_node = ft_lstlast(list);
	printf("Last node content: %d\n", *(int *)(last_node->content));

	// Free the allocated memory
	free(list->next->next);
	free(list->next);
	free(list);

	return (0);
}*/