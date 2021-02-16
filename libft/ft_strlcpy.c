/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 00:26:13 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/15 19:34:21 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	aux;

	count = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (size > 1 && src[count] != '\0')
	{
		dest[count] = src[count];
		size--;
		count++;
	}
	aux = count; 
	dest[aux] = '\0';
	while (dest[aux] != '\0' || src[count] != '\0')
	{
		++count;
	}
	return (count);
}
