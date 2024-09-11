#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello world";
    printf("THE LENGTH OF THE STRING IS : %d\n", sizeof(str));
    printf("THE LENGTH OF THE STRING IS : %d\n", strlen(str));

    char str1[] = "sprk", str2[] = "technologies";
    printf("%s%s\n", str1, str2);
    strcat(str1, str2);
    printf("with strcat : %s\n", str1);

    strupr(str1);
    printf("UPPERCASE IS : %s\n ", str1);

    strlwr(str1);
    printf("LOWERCASE IS : %s\n ", str1);

    strrev(str1);
    printf("REVERSE IS : %s\n ", str1);

    return 0;
}