/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 00:51:25 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/19 01:02:08 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstnew(void *content)
{
	t_list *new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (0);

	new -> content = content;
	new -> next = '\0';

	return (new);
}