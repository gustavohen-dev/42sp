#include <string.h>

void *ft_memset(void *str, int c, size_t n)
{
    unsigned int count;

    count = 0;
    c = (unsigned char)c;
    while (count != n)
    {
        ((unsigned char *)str)[count] = c;
        count++;
    }
    return (str);
}