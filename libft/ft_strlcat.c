/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 00:24:30 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/15 19:34:14 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_src;

	len_src = ft_strlen(src);
	len_dest = 0;
	if (dest == src)
		return (0);
	while (dest[len_dest] != '\0' && len_dest < size)
		len_dest++;
	i = len_dest;
	while (size && src[i - len_dest] != '\0' && i < (size - 1))
	{
		dest[i] = src[i - len_dest];
		i++;
	}
	if (len_dest < size)
		dest[i] = '\0';
	return (len_dest + len_src);
}
