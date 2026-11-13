/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaribou <raaribou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:35:40 by raaribou          #+#    #+#             */
/*   Updated: 2026/10/28 18:35:56 by raaribou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp_node;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		tmp_node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp_node;
	}
	*lst = NULL;
}
