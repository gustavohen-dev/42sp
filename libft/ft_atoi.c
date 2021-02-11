/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 00:29:20 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/11 08:18:29 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check_atoi(const char *str)
{
	int count;

	count = 0;
	while (*str == '\0' || *str == ' ' || *str == '\t' || *str == '\n' || 
	*str == '\v' || *str == '\f' || *str == '\r')
	{
		str++;
		count++;
	}
	
	return (count);
}

int     ft_atoi(const char *str)
{
	unsigned int count;
	long int rtn;
	long int mult;
	long int check;

	check = ft_check_atoi(str);
	mult = 1;
	rtn = 0;
	count = 0;
	if (*str == '\0')
	{
		return (0);
	}
	if (check > 0)
	{
		count = check;
	}
	if (str[count] == '-' || str[count] == '+')
	{
		count++;
	}
	while (ft_isdigit(str[count]) && str[count] != '\0')
	{
		rtn = rtn * mult;
		rtn = rtn + (str[count] - 48);
		mult = 10;
		count++;
	}
	if (str[check] == '-')
	{
		rtn = rtn * -1;
	}

	return (rtn);
}
