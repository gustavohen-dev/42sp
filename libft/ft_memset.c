/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 00:26:07 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/27 12:39:20 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memset(void *str, int c, size_t n)
{
	size_t count;

	count = 0;
	while (count != n)
	{
		((unsigned char *)str)[count] = (unsigned char)c;
		count++;
	}
	return (str);
}
