#include <stdio.h>
typedef struct students
{
    char name[20];
    int age;
    char gender[10];
} stud;

int main()
{
    FILE *fptr = fopen("file_handling/demo.txt", "w+");

    stud s1;

    printf("PLEASE ENTER YOUR NAME : ");
    gets(s1.name);

    printf("PLEASE ENTER YOUR AGE : ");
    scanf("%d", &s1.age);

    printf("PLEASE ENTER YOUR GENDER : ");
    scanf("%s", &s1.gender);

    fprintf(fptr, "\nSTUDENT INFO :\n");
    fprintf(fptr, "NAME : %s\n", s1.name);
    fprintf(fptr, "AGE : %d\n", s1.age);
    fprintf(fptr, "GENDER : %s\n", s1.gender);

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