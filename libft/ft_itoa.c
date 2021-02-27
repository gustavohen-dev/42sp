/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 00:38:30 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/27 09:45:56 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len(long nb)
{
	int		len;

	len = 0;
	if (nb < 0)
	{
		len++;
		nb = nb * -1;
	}
	else if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char     *ft_printnb(long nb, char *str, int len)
{
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	str[len--] = '\0';
	while (nb)
	{
		str[len] = (nb % 10) + '0';
		len--;
		nb = nb / 10;
	}
	return (str);
}

char     *ft_itoa(int n)
{
	char    *str;
	int     len;

	len = ft_len(n);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (n == 0)
	{
		str[0] = 48;
		str[1] = '\0';
		return (str);
	}	
	ft_printnb(n, str, len);

	return (str);
}
