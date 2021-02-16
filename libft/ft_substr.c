/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:56:46 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/15 23:54:09 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;
	size_t	count;
	size_t	start_count;

	count = 0;
	start_count = start;
	s_len = ft_strlen(s);
	if (!(str = malloc(sizeof(char) * (s_len + 1))))
	{
		return (0);
	}
	if (start < s_len)
	{
		while (start_count < start + len && s[start_count] != '\0')
		{
			str[count] =  s[start_count];
			count++;
			start_count++;
		}
	}
	str[count] = '\0';
	return (str);
}
