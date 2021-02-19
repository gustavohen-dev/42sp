/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 00:25:50 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/19 04:20:18 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t count;
	int value;

	value = 0;
	count = 0;
	if (str1 == str2 || n == 0)
	{
		return (0);
	}
	while (count < n)
	{
		if (((unsigned char *)str1)[count] != ((unsigned char *)str2)[count])
		{
			value = ((unsigned char *)str1)[count] - ((unsigned char *)str2)[count];
			break;
		}
		count++;
	}
	return (value);
}
