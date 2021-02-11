/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 01:06:49 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/11 07:20:21 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
	int len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == (unsigned char)c)
		{
			return ((char *)str + len);
		}
		len--;
	}
	return (0);
}
