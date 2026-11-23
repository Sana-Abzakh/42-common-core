/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 23:18:51 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/27 13:21:47 by sabzakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
#include "libft.h"
#include <stdio.h>

void	ft_toupperlst(void *content)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)content;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}

int	main(void)
{
	t_list *n1;
	t_list *n2;
	t_list *n3;
	t_list *tmp;

	n1 = ft_lstnew(ft_strdup("hello"));
	n2 = ft_lstnew(ft_strdup("world"));
	n3 = ft_lstnew(ft_strdup("42"));
	n1->next = n2;
	n2->next = n3;

	printf("before iter:\n");
	tmp = n1;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	ft_lstiter(n1, ft_toupperlst);

	printf("after iter:\n");
	tmp = n1;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	ft_lstclear(&n1, free);

	return (0);
}