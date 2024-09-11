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
        printf("THE CHARACTER IS : %c\n", alp);
        alp = fgetc(fptr);
        printf("THE CHARACTER IS : %c\n", alp);
        alp = fgetc(fptr);
        printf("THE CHARACTER IS : %c\n", alp);
        alp = fgetc(fptr);
        printf("THE CHARACTER IS : %c\n", alp);
        alp = fgetc(fptr);
        printf("THE CHARACTER IS : %c\n", alp);

        alp = fgetc(fptr);
        if (alp == EOF)
        {
            printf("NO DATA LEFT NIGGA !!!\n");
        }
        else
        {
            printf("THE CHARACTER IS : %c\n", alp);
        }
        printf("THE CHARACTER IS : %d\n", alp);
        fclose(fptr);
    }
}
