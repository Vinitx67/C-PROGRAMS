#include <stdio.h>
int main()
{
    FILE *fptr = fopen("file_handling/demo1.txt", "w+");

    fputs("HI I AM SPRK", fptr);
    rewind(fptr);

    char str[100];
    fgets(str, sizeof(str), fptr);
    printf("%s\n", str);

    fseek(fptr, -4, SEEK_END);

    fputs("VINIT", fptr);
    rewind(fptr);
    fgets(str, sizeof(str), fptr);
    printf("%s", str);

    fclose(fptr);
}