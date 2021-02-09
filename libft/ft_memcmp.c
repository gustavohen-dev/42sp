#include "libft.h"

int     ft_memcmp(const void *str1, const void *str2, size_t n)
{
    unsigned int count;
    int value;

    count = 0;
    if (str1 == str2 || n == 0)
    {
        return (0);
    }
    while (count < n)
    {
        value = ((unsigned int *)str1)[count] - ((unsigned int *)str2)[count];
        break;
        count++;
    }
    return (value);
}
