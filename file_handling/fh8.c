#include <stdio.h>
int main()
{
    FILE *fptr = fopen("file_handling/demo.txt", "a+");

    fprintf(fptr, "%c", ' ');
    fprintf(fptr, "%c", 'T');
    fprintf(fptr, "%c", 'H');
    fprintf(fptr, "%c", 'E');
    fprintf(fptr, "%c", 'R');
    fprintf(fptr, "%c", 'E');

    rewind(fptr);

    char alp;
    alp = fgetc(fptr);
    while (alp != EOF)
    {
        printf("%c", alp);
        alp = fgetc(fptr);
    }

    fclose(fptr);
    return 0;
}