#include <stdio.h>
typedef struct students
{
    char name[20];
    int age;
    char gender[10];
} stud;

int main()
{
    FILE *fptr = fopen("file_handling/demo.txt", "wb+");

    stud s1;

    printf("PLEASE ENTER YOUR NAME : ");
    gets(s1.name);

    printf("PLEASE ENTER YOUR AGE : ");
    scanf("%d", &s1.age);

    printf("PLEASE ENTER YOUR GENDER : ");
    scanf("%s", &s1.gender);

    fwrite(&s1, sizeof(stud), 1, fptr);
    rewind(fptr);

    stud structRead;
    fread(&structRead, sizeof(structRead), 1, fptr);
    printf("\nSTUDENT INFO :\n");
    printf("NAME : %s\n", structRead.name);
    printf("GENDER : %s\n", structRead.gender);
    printf("AGE : %d\n", structRead.age);

    fclose(fptr);
    return 0;
}