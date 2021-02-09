#include "libft.h"

size_t  ft_strlen(const char *str)
{
    unsigned int count;

    count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return (count);
}