/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 21:52:14 by sana              #+#    #+#             */
/*   Updated: 2026/10/18 22:34:20 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

/*
#include <stdio.h>

int	main(void)
{
	t_list	*new_node;
	int		value;

	value = 42;
	new_node = ft_lstnew(&value);
	printf("New node : %d\n", *(int *)(new_node->content));
	free(new_node);
}
*/