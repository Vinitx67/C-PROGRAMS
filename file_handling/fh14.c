#include <stdio.h>
int main()
{
    FILE *fptr = fopen("file_handling/demo1.txt", "r");

    char str[100];
    fgets(str, sizeof(str), fptr);
    printf("%s\n", str);

    fseek(fptr, -5, SEEK_END);
    fgets(str, sizeof(str), fptr);

    printf("%s", str);

    fclose(fptr);
}