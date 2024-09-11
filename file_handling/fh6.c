#include <stdio.h>
int main()
{
    FILE *fptr = fopen("file_handling/demo.txt", "r");
    if (fptr == NULL)
    {
        printf("FILE NOT FOUND !!!!\n");
    }
    else
    {
        char alp;
        alp = fgetc(fptr);
        while (alp != EOF)
        {
            printf("%c", alp);
            alp = fgetc(fptr);
        }
    }
}
