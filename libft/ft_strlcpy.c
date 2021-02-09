#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    unsigned count;

    count = 0;
    if (size == 0)
    {
        return (ft_strlen(src));
    }
    while (count < size || src[count] == '\0')
    {
        dest[count] = src[count];
        count++;
    }
    dest[count] = '\0';

    return (count);
}