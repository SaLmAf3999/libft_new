/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakayumo <fakayumo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:43:22 by fakayumo          #+#    #+#             */
/*   Updated: 2022/11/21 14:45:20 by fakayumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*next_node;

	node = *lst;
	while (node != NULL)
	{
		next_node = node->next;
		(*del)(node->content);
		free(node);
		node = next_node;
	}
	*lst = NULL;
}
