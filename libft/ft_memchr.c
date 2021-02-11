/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 00:25:43 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/11 03:06:28 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t count;

	count = 0;
	while (count < n)
	{
		if (((unsigned char *)str)[count] == (unsigned char)c)
		{
			return ((unsigned char *)str + count);
		}
		count++;
	}
	return (0);
}
