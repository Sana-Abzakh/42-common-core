/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sana <sana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:27:50 by sana              #+#    #+#             */
/*   Updated: 2026/10/19 16:34:17 by sana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);     // 1. transform
		new_node = ft_lstnew(new_content); // 2. wrap in a node
		if (!new_node)                     // 3. handle failure
		{
			del(new_content);            // free the payload we just made
			ft_lstclear(&new_list, del); // free everything built so far
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node); // 4. append
		lst = lst->next;                     // 5. advance original
	}
	return (new_list);
}
