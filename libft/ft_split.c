/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 23:53:53 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/18 01:06:11 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_addstr(char const *s, char c, int block)
{
	int		count;

	count = 0;
	if (block > 0)
	{
		while (s && block > 0)
		{
			if (*s == c)
			{
				block--;
			}
			s++;
			count++;
		}
	}
	while (s[count] && s[count] != c)
	{
		count++;
	}
	return (ft_substr(s, 0, count));
}

int		ft_nbstrs(char const *s, char c)
{
	int		len;
	int		rtn;

	rtn = 0;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == c)
		{
			rtn++;
		}
		len--;
	}
	return (rtn);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		n_strs;

	if (!s)
		return (0);
	n_strs = ft_nbstrs(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (n_strs + 2))))
		return (0);
	while (n_strs >= 0)
	{
		tab[n_strs] = ft_addstr(s, c, n_strs);
		n_strs--;
	}
	return (tab);
}