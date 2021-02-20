/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 00:29:20 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/20 00:43:54 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	long int		num;
	unsigned int	count;
	long int		neg;

	neg = 1;
	count = 0;
	num = 0;
	while (str[count] == ' ' || str[count] == '\t' || str[count] == '\f' ||
			str[count] == '\r' || str[count] == '\n' || str[count] == '\v')
		count++;
	if (str[count] == '+' || str[count] == '-')
		if (str[count++] == '-')
			neg = -1;
	while (str[count] >= '0' && str[count] <= '9')
	{
		num = num * 10 + (str[count] - '0');
		count++;
	}
	return ((long int)(neg * num));
}
