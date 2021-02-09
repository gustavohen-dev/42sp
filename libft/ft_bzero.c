/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 06:53:46 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/09 06:54:57 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *str, size_t n)
{
    unsigned int count;

    count = 0;
    while (count != n)
    {
        ((unsigned char *)str)[count] = '\0';
        count++;
    }
}
