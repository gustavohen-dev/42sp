/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 01:53:38 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/19 02:01:52 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst -> next != NULL)
	{
		lst = lst -> next;
	}
	
	return (lst);
}
