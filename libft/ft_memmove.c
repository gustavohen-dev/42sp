/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 00:26:03 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/10 00:26:05 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned int count;

    count = 0;
    if (((unsigned char *)dest) < ((unsigned char *)src))
        while (count < n)
        {
            ((unsigned char *)dest)[count] = ((unsigned char *)src)[count];
            count++;
        }
    else
        while (n > 0)
        {
            ((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
            n--;
        }
    return (dest);
}
