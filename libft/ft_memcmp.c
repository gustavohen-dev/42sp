#include "libft.h"

int     ft_memcmp(const void *str1, const void *str2, size_t n)
{
    unsigned int count;
    int value;

    value = 0;
    count = 0;
    while (count < n)
    {
        value = ((unsigned int *)str2)[count] - ((unsigned int *)str1)[count];
        count++;
    }
    return (value);
}
