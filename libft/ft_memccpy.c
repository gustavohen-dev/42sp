#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned int count;

    count = 0;
    while (count < n)
    {
        ((unsigned char *)dest)[count] = ((unsigned char *)src)[count];
        if (((unsigned char *)dest)[count] == (unsigned char)c)
            return (dest + count + 1);
        count++;
    }
    printf("%d", c);
    return (0);
}
