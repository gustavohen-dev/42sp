#include "libft.h"

void    *ft_memset(void *str, int c, size_t n)
{
    unsigned int count;

    count = 0;
    while (count != n)
    {
        ((unsigned char *)str)[count] = (unsigned char)c;
        count++;
    }
    return (str);
}