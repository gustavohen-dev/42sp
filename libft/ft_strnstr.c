/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 01:51:37 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/10 02:35:24 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *pattern, size_t len)
{
	unsigned int count;
	unsigned int aux;

	count = 0;
	if (pattern == 0 || *pattern == '\0')
	{
		return ((char *)str);
	}

	while (str[count] != '\0' && count < len)
	{
		aux = 0;
		while (pattern[aux] == str[count + aux] && count + aux < len)
		{
			if (pattern[aux + 1] == '\0')
			{
				return ((char *)str + count);
			}
			aux++;
		}
		count++;
	}
	return (0);
}
