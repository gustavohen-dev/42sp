/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 23:53:53 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/19 00:45:26 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_rmspc(char const *s, const char c)
{
	char	*str;
	int		count;
	int		count2;

	str = malloc(sizeof(char) * ft_strlen(s));
	count = 0;
	count2 = 0;
	while (s[count] == c)
		count++;
	while (s[count])
	{
		if ((s[count] == c && s[count + 1] != c) || s[count] != c)
		{
			str[count2] = s[count];
			count2++;
		}
		count++;
	}
	while (str[--count2] == c)
		str[count2] = '\0';
		
	return (str);
}

char	*ft_addstr(char const *s, char c, int block)
{
	int		end;

	end = 0;
	if (block > 0)
	{
		while (s && block > 0)
		{
			if (*s == c)
			{
				block--;
			}
			s++;
		}
	}
	while (s[end] != c && s[end])
	{
		end++;
	}
	return (ft_substr(s, 0, end));
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
			while (s[len] == c)
			{
				if (len == 0)
				{
					return (rtn);
				}
				len--;
			}
			rtn++;
		}
		len--;
	}
	return (rtn);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*str;
	int		n_strs;
	int		count;

	count = 0;
	if (!s)
		return (0);
	str = ft_rmspc(s, c);
	n_strs = ft_nbstrs(str, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (n_strs + 2))))
		return (0);
	while (s[count] && s[count] == ' ')
	{
		if (s[count + 1] == '\0')
			return (tab);
		count++;
	}
	while (n_strs >= 0)
	{
		tab[n_strs] = ft_addstr(str, c, n_strs);
		n_strs--;
	}
	return (tab);
}