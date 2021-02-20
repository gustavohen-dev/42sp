/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 01:51:37 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/20 00:27:46 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *pattern, size_t len)
{
	size_t len_p;

	if (*pattern == '\0')
		return ((char *)str);
	len_p = ft_strlen(pattern);
	while (*str != '\0' && len-- >= len_p)
	{
		if (*str == *pattern && ft_strncmp(str, pattern, len_p) == 0)
			return ((char *)str);
		str++;
	}
	return (0);
}
