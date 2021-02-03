#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned count;

    count = 0;
    while (count != n)
    {
        ((unsigned char *)dest)[count] = ((unsigned char *)src)[count];
        count++;
    }
    return (dest);
}