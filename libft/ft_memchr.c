/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 00:25:43 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/10 01:01:48 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int count;

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
