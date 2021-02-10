/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:30:21 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/10 04:57:54 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *str1, const char *str2, size_t n)
{
    unsigned int count;

	count = 0;
	if (str1 == str2 || n == 0)
	{
		return (0);
	}
	while (str1[count] != '\0' && count < n && str1[count] == str2[count])
	{
        count++;
	}
	return (((unsigned char)str1[count] - (unsigned char)str2[count]));
}