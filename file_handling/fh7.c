#include <stdio.h>
int main()
{
    FILE *fptr = fopen("file_handling/demo.txt", "w");

    fprintf(fptr, "%c", 'H');
    fprintf(fptr, "%c", 'E');
    fprintf(fptr, "%c", 'L');
    fprintf(fptr, "%c", 'L');
    fprintf(fptr, "%c", 'O');

    fclose(fptr);
    return 0;
}