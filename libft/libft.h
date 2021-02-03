#include <stdio.h>
#include<string.h>

#ifndef LIBFT
#define LIBFT

void *ft_memset(void *str, int c, size_t n);

void ft_bzero(void *str, size_t n);

void *ft_memcpy(void *dest, const void *src, size_t n);

#endif