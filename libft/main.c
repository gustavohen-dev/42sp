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

    char string1[60] = "The quick brown dog jumps over the lazy fox";
    char buffer[61];
    char buffer2[61];
    char *pdest;

    printf("Function: memccpy 60 characters or to character 't'\n");
    printf("Source: %s\n", string1);
    pdest = memccpy(buffer, string1, 'b', 60);
    *pdest = '\0';
    printf("Result: %s\n", buffer);
    
    printf("Function: ft_memccpy 60 characters or to character 't'\n");
    printf("Source: %s\n", string1);
    pdest = ft_memccpy(buffer2, string1, 'b', 60);
    *pdest = '\0';
    printf("Result: %s\n", buffer2);

    puts("=================================");

    char dst[50] = "oldstring";
    char dst2[50] = "oldstring";
    const char sc[50]  = "newstring";

    printf("Before memmove dest = %s, src = %s\n", dst, sc);
    memmove(dst, sc, 9);
    printf("After memmove dest = %s, src = %s\n", dst, sc);

    printf("Before memmove dest = %s, src = %s\n", dst2, sc);
    ft_memmove(dst2, sc, 9);
    printf("After memmove dest = %s, src = %s\n", dst2, sc);

    puts("=================================");

    const char str2[50] = "http://www.tutorialspoint.com";
    const char ch = ':';
    char *ret;

    ret = memchr(str2, ch, strlen(str2));

    printf("String after |%c| is - |%s|\n", ch, ret);

    ret = '\0';
    ret = ft_memchr(str2, ch, strlen(str2));

    printf("String after |%c| is - |%s|\n", ch, ret);

    puts("=================================");

    char str3[15];
    char str4[15];
    int ret2;
    int ret3;

    memcpy(str3, "ABCDEF", 6);
    memcpy(str4, "abcdef", 6);

    ret2 = memcmp(str3, str4, 6);

    if(ret2 > 0) {
        printf("str4 is less than str3\n");
    } else if(ret2 < 0) {
        printf("str3 is less than str4\n");
    } else {
        printf("str3 is equal to str4\n");
    }

    ret3 = ft_memcmp(str3, str4, 6);

    printf("%d\n", ret2);
    printf("%d\n", ret3);

    if(ret3 > 0) {
        printf("str4 is less than str3\n");
    } else if(ret3 < 0) {
        printf("str3 is less than str4\n");
    } else {
        printf("str3 is equal to str4\n");
    }

    puts("=================================");

    char str5[50];
    int len;
    int len2;

    strcpy(str5, "This is tutorialspoint.com");

    len = strlen(str5);
    printf("Length of |%s| is |%d|\n", str5, len);

    len2 = ft_strlen(str5);
    printf("Length of |%s| is |%d|\n", str5, len2);

    puts("=================================");

    char str6[50];
    char str7[50];

    strcpy(str6, "This is a test");
    strcpy(str7, "Test");

    printf("%s\n", str7);
    ft_strlcpy(str7, str6, 50);
    printf("%s\n", str7);

    puts("=================================");

    char str8[50];
    char str9[50];

    strcpy(str8, "This is a");
    strcpy(str9, " test");

    printf("%s\n", str8);
    ft_strlcat(str8, str9, 50);
    printf("%s\n", str8);

    puts("=================================");

    const char str10[] = "http://www.tutorialspoint.com";
    const char str11[] = "What you would like today ?";
    const char pattern[] = "would";
    const char ch2 = '.';

    printf("String after |%c| is - |%s|\n", ch2, strchr(str10, ch2));
    printf("String after |%c| is - |%s|\n", ch2, ft_strchr(str10, ch2));

    puts("=================================");

    printf("String after |%c| is - |%s|\n", ch2, strrchr(str10, ch2));
    printf("String after |%c| is - |%s|\n", ch2, ft_strrchr(str10, ch2));

    puts("=================================");

    printf("String after |%s| is - |%s|\n", pattern, str11);
    printf("String after |%s| is - |%s|\n", pattern, ft_strnstr(str10, pattern, 50));

    return (0);
}
