#include "libft.h"

void    *ft_memchr(const void *str, int c, size_t n)
{
    unsigned int count;

    count = 0;
    while (count != n)
    {
        if (((unsigned char *)str)[count] == (unsigned char)c)
        {
            return ((unsigned char *)str + count);
        }
        count++;
    }
    return (0);
}
