#include <stdio.h>
int main()
{
    FILE *fptr = fopen("file_handling/demo.txt", "w+");

    char name[20];
    printf("PLEASE ENTER YOUR NAME : ");
    gets(name);

    int age;
    printf("PLEASE ENTER YOUR AGE : ");
    scanf("%d", &age);

    char gender[10];
    printf("PLEASE ENTER YOUR GENDER : ");
    scanf("%s", &gender);

    fprintf(fptr, "STUDENT INFO :\n");
    fprintf(fptr, "NAME : %s\n", name);
    fprintf(fptr, "AGE : %d\n", age);
    fprintf(fptr, "GENDER : %s\n", gender);

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