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
    printf("String after |%s| is - |%s|\n", pattern, ft_strnstr(str11, pattern, 50));

    puts("=================================");

    char str12[15];
    char str13[15];
    int ret5;

    strcpy(str12, "abcdef");
    strcpy(str13, "ABCDEF");

    ret5 = strncmp(str12, str13, 4);

    if(ret5 < 0) {
        printf("str12 is less than str13\n");
    } else if(ret5 > 0) {
        printf("str13 is less than str12\n");
    } else {
        printf("str12 is equal to str13\n");
    }

    ret5 = ft_strncmp(str12, str13, 4);

    if(ret5 < 0) {
        printf("str12 is less than str13\n");
    } else if(ret5 > 0) {
        printf("str13 is less than str12\n");
    } else {
        printf("str12 is equal to str13\n");
    }

    puts("=================================");

    char c;
    c = 'J';
    printf("isalpha: %d", isalpha(c));
    c ='+';
    printf("\nisalpha: %d", isalpha(c));

    c = 'Q';
    printf("\nft_isalpha %d", ft_isalpha(c));
    c ='+';
    printf("\nft_isalpha %d\n", ft_isalpha(c));

    puts("=================================");

    c = '9';
    printf("isdigit: %d", isdigit(c));
    c ='f';
    printf("\nisdigit: %d", isdigit(c));

    c = '9';
    printf("\nft_isdigit: %d", ft_isdigit(c));
    c ='f';
    printf("\nft_isdigit: %d\n", ft_isdigit(c));

    puts("=================================");

    c = '9';
    printf("isalnum: %d", isalnum(c));
    c = 's';
    printf("\nisalnum: %d", isalnum(c));

    c = '9';
    printf("\nft_isalnum: %d", ft_isalnum(c));
    c = 's';
    printf("\nft_isalnum: %d\n", ft_isalnum(c));

    puts("=================================");

    c = '9';
    printf("isascii: %d", isascii(c));
    c = 200;
    printf("\nisascii: %d", isascii(c));

    c = '9';
    printf("\nft_isascii: %d", ft_isascii(c));
    c = 200;
    printf("\nft_isascii: %d\n", ft_isascii(c));

    puts("=================================");

    c = '9';
    printf("isprint: %d", isprint(c));
    c = 200;
    printf("\nisprint: %d", isprint(c));

    c = '9';
    printf("\nft_isprint: %d", ft_isprint(c));
    c = 200;
    printf("\nft_isprint: %d\n", ft_isprint(c));

    puts("=================================");

    c = 'g';
    printf("toupper: %d", toupper(c));
    c = 'A';
    printf("\ntoupper: %d", toupper(c));

    c = 'g';
    printf("\nft_toupper: %d", ft_toupper(c));
    c = 'A';
    printf("\nft_toupper: %d\n", ft_toupper(c));

    puts("=================================");

    c = 'g';
    printf("tolower: %d", tolower(c));
    c = 'A';
    printf("\ntolower: %d", tolower(c));

    c = 'g';
    printf("\nft_tolower: %d", ft_tolower(c));
    c = 'A';
    printf("\nft_tolower: %d\n", ft_tolower(c));


    return (0);
}
