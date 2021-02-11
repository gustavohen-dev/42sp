/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 00:30:47 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/11 07:18:06 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
	int count;

	count = 0;
	while (str[count] != '\0' && str[count] != c)
	{
		count++;
	}
	if (str[count] == c)
	{
		return ((char *)str + count);
	}
	return (0);
}
