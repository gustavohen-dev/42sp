#include "libft.h"

int main()
{
    char str[50];

    strcpy(str,"This is memset function");
    puts(str);

    memset(str,'$',7);
    puts(str);

    strcpy(str,"This is ft_memset function");
    puts(str);

    ft_memset(str,'$',7);
    puts(str);

    puts("=================================");

    strcpy(str,"This is bzero function");
    puts(str);

    bzero(str, 7);
    puts(str);

    strcpy(str,"This is ft_bzero function");
    puts(str);

    ft_bzero(str, 7);
    puts(str);

    puts("=================================");

    const char src[50] = "hello";
    char dest[50];

    strcpy(dest,"Heloooo!!");
    printf("Before memcpy dest = %s\n", dest);

    memcpy(dest, src, strlen(src)+1);
    printf("After memcpy dest = %s\n", dest);

    strcpy(dest,"Heloooo!!");
    printf("Before ft_memcpy dest = %s\n", dest);

    ft_memcpy(dest, src, strlen(src)+1);
    printf("After ft_memcpy dest = %s\n", dest);

    puts("=================================");


    return (0);
}