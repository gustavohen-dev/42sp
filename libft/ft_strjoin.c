/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 20:35:55 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/27 12:48:17 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;
	int		count;

	if (!s1 || !s2)
		return (NULL);
	count = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (0);
	while (*s1 != '\0')
	{
		str[count] = *s1;
		s1++;
		count++;
	}
	while (*s2 != '\0')
	{
		str[count] = *s2;
		s2++;
		count++;
	}
	str[count] = '\0';
	return (str);
}
