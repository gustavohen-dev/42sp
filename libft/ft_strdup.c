/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 02:29:49 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/11 02:43:17 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *str)
{
	char *ptr;
	unsigned int len;

	len = ft_strlen(str);
	if ((ptr = malloc(len + 1)))
	{
		ft_memcpy(ptr, str, len);
		return (ptr);
	}
	return (0);
}
