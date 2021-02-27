/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 23:53:53 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/27 12:44:42 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_malloc_error(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

unsigned int	ft_get_nb_strs(char const *s, char c)
{
	unsigned int	count;
	unsigned int	nb_strs;

	if (!s[0])
		return (0);
	count = 0;
	nb_strs = 0;
	while (s[count] && s[count] == c)
		count++;
	while (s[count])
	{
		if (s[count] == c)
		{
			nb_strs++;
			while (s[count] && s[count] == c)
				count++;
			continue ;
		}
		count++;
	}
	if (s[count - 1] != c)
		nb_strs++;
	return (nb_strs);
}

void			ft_get_next_str(char **next_str, unsigned int *next_str_len,
					char c)
{
	unsigned int count;

	*next_str += *next_str_len;
	*next_str_len = 0;
	count = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while ((*next_str)[count])
	{
		if ((*next_str)[count] == c)
			return ;
		(*next_str_len)++;
		count++;
	}
}

char			**ft_split(char const *s, char c)
{
	char			**tab;
	char			*next_str;
	unsigned int	next_str_len;
	unsigned int	nb_strs;
	unsigned int	i;

	if (!s)
		return (NULL);
	nb_strs = ft_get_nb_strs(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (nb_strs + 1))))
		return (NULL);
	i = 0;
	next_str = (char *)s;
	next_str_len = 0;
	while (i < nb_strs)
	{
		ft_get_next_str(&next_str, &next_str_len, c);
		if (!(tab[i] = (char *)malloc(sizeof(char) * (next_str_len + 1))))
			return (ft_malloc_error(tab));
		ft_strlcpy(tab[i], next_str, next_str_len + 1);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
