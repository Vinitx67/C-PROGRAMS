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
        printf("OPEN SUCCESFULLY !!!\n");
    }
}