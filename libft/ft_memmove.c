/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 00:26:03 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/11 05:36:56 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t count;

	count = 0;
	if (((unsigned char *)dest) < ((unsigned char *)src))
	{
		while (count < n)
		{
			((unsigned char *)dest)[count] = ((unsigned char *)src)[count];
			count++;
		}
	}
	else if (((unsigned char *)dest) > ((unsigned char *)src))
	{
		while (n > 0)
		{
			((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
	}
	return (dest);
}
