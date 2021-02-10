/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 00:26:13 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/10 02:17:16 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned count;

	count = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (count < size || src[count] == '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';

	return (count);
}