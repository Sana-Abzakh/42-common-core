/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabzakh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 23:18:33 by sabzakh           #+#    #+#             */
/*   Updated: 2026/10/27 10:26:24 by sabzakh          ###   ########.fr       */
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
/*int     main()
{
         t_list *node1;
         t_list *node2;
         t_list *node3;
         t_list *before;
      
         node2 = ft_lstnew(ft_strdup("42"));
         node1 = ft_lstnew(ft_strdup("43"));
         node3 = ft_lstnew(ft_strdup("44"));

         node1 ->next = node2;
         node2 ->next = node3;

         before = node1;
         printf("before clear\n");
         while(before != NULL)
         {
                 printf("%s",(char *)before -> content);
                 before = before ->next;
         }
         ft_lstclear (&node1,del);
		if (node1 == NULL)
		{printf("\n list is empty \n");}
}*/
