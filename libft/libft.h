/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 00:26:28 by ghenriqu          #+#    #+#             */
/*   Updated: 2021/02/10 07:09:29 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT
#define LIBFT

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void	*ft_memset(void *str, int c, size_t n);

void	ft_bzero(void *str, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

void	*ft_memmove(void *str1, const void *str2, size_t n);

void	*ft_memchr(const void *str, int c, size_t n);

int		ft_memcmp(const void *str1, const void *str2, size_t n);

size_t	ft_strlen(const char *str);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

char	*ft_strchr(const char *str, int c);

char	*ft_strrchr(const char *str, int c);

char	*ft_strnstr(const char *str, const char *pattern, size_t len);

int		ft_strncmp(const char *str1, const char *str2, size_t n);

int		ft_isalpha(int arg);

int		ft_isdigit(int c);

int     ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_toupper(int c);

int		ft_tolower(int c);

#endif