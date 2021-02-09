#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    unsigned int count;
    unsigned int rtn;
    int len;

    count = 0;
    len = ft_strlen(dest);
    if (size > ft_strlen(src))
    {
        rtn = len + ft_strlen(src);
    }
    else
    {
        rtn = ft_strlen(src) + size;
    }
    while (count != ft_strlen(src) && count < size)
    {
        dest[len + count] = src[count];
        count++;
    }
    dest[len + count] = '\0';
    return ((size_t)rtn);
}
