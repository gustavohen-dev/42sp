/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 00:25:59 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/10 00:26:00 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned int count;

    count = 0;
    while (count < n)
    {
        ((unsigned char *)dest)[count] = ((unsigned char *)src)[count];
        count++;
    }
    return (dest);
}
