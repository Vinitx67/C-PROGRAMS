#include <stdio.h>
typedef struct students
{
    char name[20];
    int age;
    char gender[10];
} stud;

int main()
{
    FILE *fptr = fopen("file_handling/demo.txt", "ab+");

    stud s1;
    int n;
    printf("ENTER NUMBER OF DATA TO BE STORED : ");
    scanf("%d", &n);
    fflush(stdin);

    for (int i = 1; i <= n; i++)
    {

        printf("\nPLEASE ENTER YOUR NAME : ");
        gets(s1.name);

        printf("PLEASE ENTER YOUR AGE : ");
        scanf("%d", &s1.age);

        printf("PLEASE ENTER YOUR GENDER : ");
        scanf("%s", s1.gender);
        fflush(stdin);

        int result = fwrite(&s1, sizeof(stud), 1, fptr);
        if (result)
        {
            printf("DATA STORED SUCCESSFULLY\n");
        }
        else
        {
            printf("ERROR OCCURED\n");
        }
    }
    rewind(fptr);

    stud structRead;
    while (fread(&structRead, sizeof(structRead), 1, fptr) > 0)
    {
        printf("\nSTUDENT INFO :\n");
        printf("NAME : %s\n", structRead.name);
        printf("GENDER : %s\n", structRead.gender);
        printf("AGE : %d\n", structRead.age);
    }
    fclose(fptr);
    return 0;
}