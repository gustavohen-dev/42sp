/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 02:41:44 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/19 03:08:45 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*aux;

	if (!lst)
		return ;
	if (del)
	{
		while (*lst != NULL)
		{
			aux = (*lst) -> next;
			ft_lstdelone(*lst, del);
			*lst = aux;
		}
	}
	lst = NULL;
}