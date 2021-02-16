/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 21:21:35 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/16 06:35:41 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;

	end = ft_strlen(s1);
	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
	}
	while (end && ft_strchr(set, s1[end]))
	{
		end--;
	}
	return (ft_substr(s1, 0, end + 1));
}
