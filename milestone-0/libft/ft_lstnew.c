/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 23:19:15 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/26 23:44:17 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
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