/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 01:34:29 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/27 12:22:40 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t nitems, size_t size)
{
	int *ptr;

	if ((ptr = malloc(nitems * size)))
	{
		ft_bzero(ptr, nitems * size);
		return (ptr);
	}
	return (0);
}
