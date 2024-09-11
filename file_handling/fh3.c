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
        fscanf(fptr, "%c", &alp);
        printf("THE CHARACTER IS : %c\n", alp);
        fscanf(fptr, "%c", &alp);
        printf("THE CHARACTER IS : %c\n", alp);
        fscanf(fptr, "%c", &alp);
        printf("THE CHARACTER IS : %c\n", alp);
        fscanf(fptr, "%c", &alp);
        printf("THE CHARACTER IS : %c\n", alp);
        fscanf(fptr, "%c", &alp);
        printf("THE CHARACTER IS : %c\n", alp);
    }
}
